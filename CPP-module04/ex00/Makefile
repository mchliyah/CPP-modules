# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 00:54:59 by mchliyah          #+#    #+#              #
#    Updated: 2022/10/09 00:56:41 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

FILES = main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\


OBJECTS =  $(FILES:.cpp=.o)

%.o: %.c
	$(CC) $^ -o $@

.PHONY: clean all re fclean

all : $(NAME)

$(NAME) :  $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME) 

clean :
	$(RM) $(OBJECTS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
