# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 08:53:50 by smorphet          #+#    #+#              #
#    Updated: 2023/11/15 11:29:49 by smorphet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

SRC	= main.cpp PmergeMe.cpp

OBJ	=  $(SRC:.cpp=.o)

INC = PmergeMe.hpp Color.hpp

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 # -fsanitize=address


all: $(NAME) $(NAME)

$(OBJ):
	$(CC) -c $(FLAGS) $(SRC)

$(NAME):$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "\033[0;92m* $(NAME) was created *\033[0m"

clean:
	rm -rf $(OBJ)
	@echo "\033[0;91m* $(NAME) .o files were deleted *\033[0m"

fclean: clean
	rm -rf  $(NAME)
	@echo "\033[0;91m* $(NAME) was deleted *\033[0m"

re: fclean all
.PHONY:		start all clean fclean re bonus norm
.SILENT: