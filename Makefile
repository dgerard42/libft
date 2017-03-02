NAME = libft.a

SRC = *.c

OFILES = *.o

HEADERS = libft.h

all: $(NAME)

$(NAME):
	gcc -c -g -Wall -Werror -Wextra $(SRC) $(HEADERS)
	ar rc $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
