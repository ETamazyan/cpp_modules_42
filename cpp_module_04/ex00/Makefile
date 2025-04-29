CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
#-Wshadow and -Wno-shadow compiler flags

NAME = polymorphism

INCS = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

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