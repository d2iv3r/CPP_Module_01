NAME = sedReplace

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = sedReplace.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) sedReplace.hpp
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp sedReplace.hpp 
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
