sourcefiles = 	ft_printc.c ft_printd.c ft_printf.c ft_printp.c ft_prints.c ft_prints.c \
				ft_printu.c ft_printx_lo.c ft_printx_up.c

objects =		$(sourcefiles:.c=.o)

NAME =			libftprintf.a

all:			$(NAME)

$(NAME):		$(objects)
	@ar rcs libftprintf.a $(objects)

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

clean:
	@rm -f $(objects)

fclean:
	@rm -f $(objects) $(NAME)

re: 			fclean all