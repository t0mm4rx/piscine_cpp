NAME=megaphone
FLAGS=-Werror -Wall -Wextra

all: $(NAME)

$(NAME): megaphone.cpp
	clang++ $(FLAGS) megaphone.cpp -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
