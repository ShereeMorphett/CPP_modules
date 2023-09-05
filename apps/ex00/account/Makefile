# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 10:14:02 by smorphet          #+#    #+#              #
#    Updated: 2023/08/22 12:09:47 by smorphet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRC	= tests.cpp Account.cpp

OBJ	=  $(SRC:.cpp=.o)

INC = Account.hpp

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98


all: $(NAME) $(NAME)

$(OBJ):
	cc -c $(FLAGS) $(SRC)

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