NAME = libftprintf.a

SRCS = ft_printf.c \
	ft_printnbr.c \
	ft_printstr.c \
	ft_print_add.c 
	
OBJS = $(SRCS:.c=.o)	
CFLAGS = -Wall -Werror -Wextra
AR = ar rc
LIBR = ranlib
LIBFTDIR =./libft
LIBFT = $(LIBFTDIR)/libft.a
RM = rm -f
CP = cp

all: $(NAME) $(LIBFT)

$(LIBFT): $(LIBFTDIR)
	@$(MAKE) -C $(LIBFTDIR)

$(NAME): $(LIBFT) $(OBJS) 
	$(CP) $(LIBFT) $(NAME)
	$(AR)	$(NAME) $(OBJS)
	$(LIBR) $(NAME)

clean:
	@$(MAKE) clean -C $(LIBFTDIR)
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(LIBFT)
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re