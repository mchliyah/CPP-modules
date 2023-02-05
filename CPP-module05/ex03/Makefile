# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 00:54:59 by mchliyah          #+#    #+#              #
#    Updated: 2022/11/17 22:13:27 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CC = c++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

FILES = main.cpp\
	Bureaucrat.cpp\
	Form.cpp\
	PresidentialPardonForm.cpp\
	RobotomyRequestForm.cpp\
	ShrubberyCreationForm.cpp\
	Intern.cpp\
	

OBJECTS = $(FILES:.cpp=.o)

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
