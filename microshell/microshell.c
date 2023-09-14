
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

void ft_putstr_fd2(char *line, char *str)
{
	int index = 0;

	while (line[index])
	{
		write(2, &line[index], 1);
		index++;
	}
	if (str)
	{
		index = 0;
			while (str[index])
		{
			write(2, &str[index], 1);
			index++;
		}
	}
	write(2, "\n", 1);
}


int run_cd(char **argv, int index)
{
	if (index != 2)
	{
        ft_putstr_fd2("error: cd: bad arguments", NULL);
        return (1);
	}
	if (chdir(argv[1]) == -1)
	{
		ft_putstr_fd2("error: cd: cannot change directory to ", argv[1]);
        return (1);
	}
	return (0);
}


int run_cmd(char **argv, int index, char **envp)
{
	int status = 0;
	int pid = 0;
	int fd[2];
	int is_pipe = 0;

	if (argv[index] && !strcmp(argv[index], "|"))
		is_pipe = 1;
	if (is_pipe && pipe(fd) == -1)
	{
		ft_putstr_fd2("error: fatal", NULL);
		return (1);
	}
	pid = fork();
	if (pid == -1)
	{
		ft_putstr_fd2("error: fatal", NULL);
		return (1);
	}
	if (pid == 0)
	{
		argv[index] = NULL;

		if (is_pipe == 1 && (dup2(fd[1], 1) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
		{
			ft_putstr_fd2("error: fatal", NULL);
			return (1);
		}
		execve(*argv, argv, envp);
		if (argv[0])
			ft_putstr_fd2("error: cannot execute ", argv[0]);
		return (1);
	}
	waitpid(pid, &status, 0);
	if (is_pipe == 1 && (dup2(fd[0], 0) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
	{
		ft_putstr_fd2("error: fatal", NULL);
		return (1);
	}
	return (WEXITSTATUS(status));
}


int main(int argc, char **argv, char **envp)
{
	int index = 0;
	int status = 0;


	if (argc < 2)
		return (0);
	
	while (argv[index] && argv[++index])
	{
		argv += index;
		index = 0;

		while (argv[index] && strcmp(argv[index], ";") && strcmp(argv[index], "|"))
			index++;
	
		if (!strcmp(argv[0], "cd"))
			status = run_cd(argv, index);
		else
			status = run_cmd(argv, index, envp);
	}

	return (status);
}