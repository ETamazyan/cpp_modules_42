CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

NAME = harlFilter

INCS = Harl.hpp

SRCS = main.cpp Harl.cpp

OBJ_DIR = objects/

OBJS = $(SRCS:%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(OBJ_DIR)%.o: %.cpp Makefile
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM) -rf $(OBJ_DIR) 

# $(RM) flexible for other platforms too
fclean: clean
	@$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re