NAME = harlFilter

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Harl.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) Harl.hpp
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp Harl.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
