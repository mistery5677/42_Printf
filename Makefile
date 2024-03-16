CC = gcc
CFLAGS = -Werror -Wextra -Wall
NAME = printf.a
LIBRARY =  libft/*.c \
		source/*.c \
		tester.c
OBJ = ./*.o
EXECUTE = ./a.out

all:
	$(CC) $(CFLAGS) -O -c $(LIBRARY)
	ar rc $(NAME) $(OBJ)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

teste: all clean
	$(CC) $(CFLAGS) $(NAME)
	$(EXECUTE)
	