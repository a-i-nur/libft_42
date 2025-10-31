GCC = gcc
FLAGS = -Wall -Wextra -Werror -I.
FILES = $(filter-out main.c, $(wildcard *.c))
OFILES = $(FILES:.c=.o)

NAME = libft.a
HEADER = libft.h

all: $(NAME)

$(NAME): $(OFILES)
	@ar rcs $(NAME) $?
	@ranlib $(NAME)
	@echo "Libc function, Additional functions are ready"

%.o: %.c $(HEADER)
	@$(GCC) $(FLAGS) -c $< -o $@
	@echo "$@ is ready"

bonus: 

test: 
	@$(GCC) $(FLAGS) $(NAME) 
	@./a.out

clean:
	@rm -f $(OFILES)
	@echo ".o files were deleted"

fclean: clean
	@rm -f $(NAME) a.out
	@echo "All files were deleted"

re: fclean all

.PHONY: all clean fclean re test
