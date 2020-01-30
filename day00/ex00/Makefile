NAME=megaphone
FLAGS=-Werror -Wall -Wextra

all: $(NAME)

$(NAME): megaphone.cpp
	clang++ $(FLAGS) megaphone.cpp -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
