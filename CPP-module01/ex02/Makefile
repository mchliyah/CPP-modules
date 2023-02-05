# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 19:19:45 by mchliyah          #+#    #+#              #
#    Updated: 2022/09/28 20:47:13 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

FILES = main.cpp\

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