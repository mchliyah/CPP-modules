NAME = easyfind

CC = c++

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

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