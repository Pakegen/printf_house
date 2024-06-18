NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c\
       ft_printchar.c\
       ft_printstr.c\
       ft_printnbr.c\
       ft_printunsigned.c\
       ft_printhexa.c\
       ft_printmajhexa.c\
       ft_printphexa.c\

LIBFT_PATH = ./libft

LIBFT = $(LIBFT_PATH)./libft.a

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
