NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBC = ar rc
LIBR = ranlib
LIBFTDIR =./libft
LIBFT = $(LIBFTDIR)/libft.a
RM = rm -f
CP = cp
SRCS = ft_printf.c \
	ft_printnbr.c \
	ft_printstr.c \
	ft_putchar.c \
	ft_print_ptr.c
	
OBJS = $(SRCS:.c=.o)
EXECUTE = ./a.out

all: $(NAME) $(LIBFT)

$(NAME): $(LIBFT) $(OBJS) 
	$(CP) $(LIBFT) $(NAME)
	$(LIBC)	$(NAME) $(OBJS)
	$(LIBR) $(NAME)

$(LIBFT): $(LIBFTDIR)
	@$(MAKE) -C $(LIBFTDIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	@$(MAKE) clean -C $(LIBFTDIR)
	$(RM) $(OBJS)

fclean:	clean
	@$(MAKE) fclean -C $(LIBFTDIR)
	$(RM) $(NAME)
	$(RM) a.out

re:	fclean all

teste: all
	$(CC) $(FLAGS) $(NAME)
	@$(EXECUTE)
	