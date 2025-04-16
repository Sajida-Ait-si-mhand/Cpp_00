# Colors:
RED = \033[0;31m
YELLOW = \033[0;33m
BLACK = \033[0m
MAGENTA = \033[1;35m
CYAN = \033[36m
GREEN0 = \033[32m
GREEN1 = \033[38;5;121m
HIGHLIGHTER = \033[0;43m
# Files:

SRC =	megaphone.cpp
OBJ = $(SRC:.cpp=.o)

# Flags:
CC = c++
CFLAGS = -Wall -Werror -Wextra  -std=c++98

# Library:
NAME = megaphone


# Targets:
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@echo "$(CYAN)Megaphone is making ..👾$(BLACK)"
	@$(CC) $(OBJ) $(CFLAGS)  -o $(NAME) $(LFLAGS)

clean:
	@echo "$(GREEN0)Cleaning 🧹$(BLACK)"
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@echo "$(YELLOW)Done cleaning ✨$(BLACK)"

re: fclean all

.PHONY: all clean fclean re