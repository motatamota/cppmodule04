NAME = ex03
FLAG = -Wall -Wextra -Werror -std=c++98
SRC = AMateria.cpp Character.cpp Crue.cpp Ice.cpp main.cpp MateriaSource.cpp ICharacter.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

