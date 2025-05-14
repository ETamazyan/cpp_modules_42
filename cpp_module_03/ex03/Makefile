CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
#-Wshadow and -Wno-shadow compiler flags

NAME = nowItisWeird

INCS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

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

# $(RM) flexible for other platforms too
fclean: clean
	@$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re