##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC	=	gcc

RM	=	rm -f

SRCDIR	=	src/

SRC	=	checks.c 	\
		functions.c 	\
		my_getnbr.c 	\
		my_put_nbr.c 	\
		my_putstr.c 	\
		rerenewpushap.c \
		struct_list.c 	\

OBJ	=	$(addprefix $(SRCDIR), $(SRC:.c=.o))

CFLAGS	=	-I./include

CFLAGS	+=	-Wall -Wextra

NAME	=	push_swap

all:		$(NAME) clean

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
