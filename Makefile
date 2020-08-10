##
## EPITECH PROJECT, 2018
## CPool_Day10
## File description:
## Makefile
##

SRCS	=	my_strlen.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		rush2.c


OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

RM	=	rm -rf

NAME	=	rush2

all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
