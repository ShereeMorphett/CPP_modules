# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 08:53:50 by smorphet          #+#    #+#              #
#    Updated: 2023/10/17 11:52:29 by smorphet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRC	= main.cpp 

OBJ	=  $(SRC:.cpp=.o)

INC = Inter.hpp Color.hpp

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98


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