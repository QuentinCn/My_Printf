##
## EPITECH PROJECT, 2020
## makefile
## File description:
## root my_printf
##

LIB	=	$(shell find sources/ -name "*.c")

OBJ     =       $(LIB:.c=.o)

NAME    =       libmy.a

A.OUT	=	a.out

all:	libmy.a

libmy.a:	$(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@rm -f *~
	@rm -f ./sources/*~
	@rm -f ./includes/*~

fclean:	clean
	@rm -f $(NAME)
	clear

re:	fclean	all
