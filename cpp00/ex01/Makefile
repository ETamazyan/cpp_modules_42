CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

SRCS = main.cpp Contact.cpp PhoneBook.cpp

OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re