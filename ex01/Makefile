SRCS = Zombie.Class.hpp Zombie.Class.cpp zombieHorde.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = clang++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = moar_brainz

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all $(NAME)

.PHONY: all clean fclean re