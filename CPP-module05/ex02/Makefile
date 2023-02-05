# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 00:54:59 by mchliyah          #+#    #+#              #
#    Updated: 2022/11/15 19:47:40 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CC = c++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

FILES = main.cpp\
	Bureaucrat.cpp\
	Form.cpp\
	PresidentialPardonForm.cpp\
	RobotomyRequestForm.cpp\
	ShrubberyCreationForm.cpp\
	

OBJECTS = $(FILES:.cpp=.o)


# 	$(CC) $(CFLAGS) $^ -o $@

.PHONY: clean all re fclean

all : $(NAME)

$(NAME) :  $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) 

$(OBJECTS) :
	$(CC) $(CFLAGS) -c $(@:.o=.cpp) -o $@

clean :
	$(RM) $(OBJECTS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
