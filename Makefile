

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_hex_dec.c ft_put_usign_nbr.c ft_printf.c \
       ft_putnbr.c ft_putchar.c ft_strlen.c ft_putstr.c ft_void_hex.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) *.a

re: fclean all

.PHONY: all clean fclean re
