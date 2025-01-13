NAME = attack

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony : all clean fclean re
