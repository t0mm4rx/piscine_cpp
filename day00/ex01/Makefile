NAME=nul
FLAGS=-Werror -Wall -Wextra

SRC = nul.cpp commands.cpp Contact.cpp
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

fclean: clean
	rm -f $(NAME)

re: fclean all
