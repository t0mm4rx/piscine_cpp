NAME=bin
FLAGS=-Werror -Wall -Wextra

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) *.cpp -o $(NAME)

sanitize:
	clang++ $(FLAGS) -fsanitize=address -g3 *.cpp -o $(NAME)

run: $(NAME)
	./$(NAME)

clean:
	rm -f *.o
	rm -rf *.dSYM
	rm -rf *_shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all
