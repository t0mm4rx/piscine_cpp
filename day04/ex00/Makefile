NAME=bin
FLAGS=-Werror -Wall -Wextra

SRC = main.cpp Peon.cpp Sorcerer.cpp Victim.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.c
	clang++ $(FLAGS) $@ -c $<

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

run: $(NAME)
	./$(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
