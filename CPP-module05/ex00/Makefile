# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 00:54:59 by mchliyah          #+#    #+#              #
#    Updated: 2022/11/13 00:10:44 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

FILES = main.cpp\
	Bureaucrat.cpp\
		


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
