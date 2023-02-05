# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 10:45:49 by mchliyah          #+#    #+#              #
#    Updated: 2022/11/25 10:45:53 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tmplate

CC = c++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

FILES = main.cpp\
	

OBJECTS = $(FILES:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

all : $(NAME)

$(NAME) :  $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) 


clean :
	$(RM) $(OBJECTS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean re fclean