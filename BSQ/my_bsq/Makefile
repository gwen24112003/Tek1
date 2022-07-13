##
## EPITECH PROJECT, 2021
## B-CPE-110-NCE-1-1-BSQ-gwendoline.vanelle
## File description:
## Makefile
##

SRC	=	lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr.c	\
		my_bsq.c			\
		my_bsq_utils.c		\

NAME	=	bsq

$(NAME)	:
	gcc -o $(NAME) $(SRC) -g3

all	:	$(NAME)

clean:
	rm -f ./bsq
	rm -f vgcore*

fclean	:	clean
	rm -rf $(NAME)

re	:	fclean $(NAME)
