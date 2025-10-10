GCC = gcc
FLAGS = -Wall -Wextra -Werror -I.
FILES = $(filter-out main.c, $(wildcard *.c))
OFILES = $(FILES:.c=.o)

NAME = libft.a
HEADER = libft.h

TEST = test

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.c $(HEADER)
	$(GCC) $(FLAGS) -c $< -o $@

test: $(NAME) tests/main.c
	$(GCC) $(FLAGS) tests/main.c -L. -lft -o $(TEST)
	./$(TEST)

clean:
	rm -f $(OFILES) $(TEST)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
