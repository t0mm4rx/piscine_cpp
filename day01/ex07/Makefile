NAME=replace
FLAGS=-Werror -Wall -Wextra

SRC = ${wildcard *.cpp}
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.c
	clang++ $(FLAGS) $@ -c $<

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

run: $(NAME)
	./$(NAME)

clean:
	rm -f $(OBJ)
	rm -f *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all
