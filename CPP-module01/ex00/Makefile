# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 19:20:21 by mchliyah          #+#    #+#              #
#    Updated: 2022/09/28 19:20:22 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = braiinz

CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

FILES = main.cpp\
	Zombie.cpp\
	newZombie.cpp\
	randomChump.cpp\

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