TARGET=test
OBJS=whatever.o
SRCS=whatever.cpp
FLAGS=-Werror -Wextra -Wall -fsanitize=address -g3

convert: $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(TARGET)

$(OBJS): $(SRCS)
	clang++ -c $(SRCS)
