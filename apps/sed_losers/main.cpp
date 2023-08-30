/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:27:23 by smorphet          #+#    #+#             */
/*   Updated: 2023/08/30 16:29:05 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

/*
Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class std::string are allowed, except replace. Use them
wisely!
Of course, handle unexpected inputs and errors. You have to create and turn in your
own tests to ensure your program works as expected
*/

static char* processInFile(char *fileName)
{
	std::ifstream	ogFile;
	char *ogFileCopy;

	ogFile.open(fileName);
	
	if (ogFile.fail())
	{
		std::cout << "Error opening file" << std::endl;
		return (NULL);
	}

	ogFile.close();
	
	std::cout << ogFileCopy << std::endl;
	
	return ogFileCopy;

}


int main(int argc, char **argv)
{
	char *ogFileCopy;
		
	//input handling
	if (argc <! 4)
	{
		std::cout << "<file name> <word to be replaced> <new word>" << std::endl;
		return 1;
	}

	ogFileCopy = processInFile(argv[1]);
	
	if (ogFileCopy == NULL)
		return 1;
	
	
	/*
		Create objects of ifstream and ofstream classes.
		Check if they are connected to their respective files. If so, go ahead otherwise check the filenames twice.
		Read the contents of the source file using the getline() method and write the same to the destination using the << operator ( i.e. copy each line from ifstream object to ofstream object).
		Close files after the copy using the close() method.
		End the program.
	*/
	
	// replace, replacing every occurrence of s1 with s2.

    return 0;
}