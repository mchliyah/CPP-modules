NAME = megaphone

CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

FILES = megaphone.cpp\

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