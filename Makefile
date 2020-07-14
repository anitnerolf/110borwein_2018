##
## EPITECH PROJECT, 2019
## 110borwein
## File description:
## makefile
##

SRC	=	main.c		\
		usage_h.c	\
		check_number.c

OBJ	=	$(SRC:.c=.o)

NAME	=	110borwein

CFLAGS	=	-g -g3 -ggdb -I ./include -lm

all:		$(NAME) message

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all

message:
		@echo "SUCCESSFULLY COMPILED!"
