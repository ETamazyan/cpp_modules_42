CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

NAME = account

INCS = Account.hpp

SRCS = Account.cpp tests.cpp

OBJ_DIR = objects/

OBJS = $(SRCS:%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(OBJ_DIR)%.o: %.cpp Makefile $(INCS)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM) -rf $(OBJ_DIR)

fclean: clean
	@$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re