NAME = replace

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

FLAGS = -Werror -Wextra -Wall -fsanitize=address -g3

all: $(NAME)

%.o: %.c
	clang++ %(FLAGS) $@ -c $<

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

run: $(NAME)
	./$(NAME) test replace REPLACE

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
