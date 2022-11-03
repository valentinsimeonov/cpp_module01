NAME = harlFilter

CC = c++

FLAGS = -Werror -Wall -Wextra -std=c++98

SRC = main.cpp harl.cpp

RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $@

clean:
	@$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all $(NAME)

.PHONY: all clean fclean re