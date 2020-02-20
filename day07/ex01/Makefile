TARGET=test
OBJS=iter.o
SRCS=iter.cpp
FLAGS=-Werror -Wextra -Wall -fsanitize=address -g3

convert: $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(TARGET)

$(OBJS): $(SRCS)
	clang++ -c $(SRCS)
