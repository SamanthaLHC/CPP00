# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samantha <samantha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 12:06:01 by sle-huec          #+#    #+#              #
#    Updated: 2022/11/01 10:32:07 by samantha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRC = ./megaphone.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

${NAME}: ${OBJ}
	${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}
	rm -rf ${OBJ}

re : fclean
	make all

vgrind: ${NAME}
		valgrind ./$(NAME)

test: $(NAME)
	./$(NAME)
	

.PHONY: clean fclean re grind test
