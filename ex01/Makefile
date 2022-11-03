# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 12:06:01 by sle-huec          #+#    #+#              #
#    Updated: 2022/11/03 16:36:41 by sle-huec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CXX = g++
CXXFLAGS = -MMD -Wall -Wextra -Werror -g3 -std=c++98


INCLUDE = -I./includes

SRCS_PATH = ./srcs/
OBJ_PATH = ./objs/

SRCS = $(addprefix $(SRCS_PATH), \
		PhoneBook.cpp \
		Contact.cpp \
		main.cpp)

OBJS	= $(SRCS:$(SRCS_PATH)%.cpp=$(OBJ_PATH)%.o)
DEPS	= $(SRCS:$(SRCS_PATH)%.cpp=$(OBJ_PATH)%.d)

all: $(NAME)

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

$(OBJ_PATH)%.o: $(SRCS_PATH)%.cpp
	mkdir -p $(OBJ_PATH)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCLUDE)

clean:
	rm -rf ${OBJS} ${DEPS}

fclean: clean
	rm -rf ${NAME}
	rm -rf ${OBJ_PATH}

re: fclean
	make -C
	make all

grind: ${NAME}
		valgrind ./$(NAME) "je teste valgrind"

test: $(NAME)
	./$(NAME) "123 pouet pouet"
	
test1: $(NAME)
	./$(NAME) "Je TEste une chaine AVec DES MAj"
	
test2: $(NAME)
	./$(NAME) "je teste une chaine av_*c des sy_mb+les"

test3: $(NAME)
	./$(NAME) "je" "teste plusieurs" "arg"
	
test4: $(NAME)
	./$(NAME)

.PHONY: clean fclean re grind test
