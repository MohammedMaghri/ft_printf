
SRC = lencount.c adreess.c putnum.c putstring.c paste.c ft_printf.c
OBJS = ${SRC:.c=.o}
CC = CC
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -f 

all : $(NAME)

$(NAME): $(OBJS) libftprintf.a
			ar rcs $(NAME) $(OBJS)
clean :
		$(RM) $(OBJS)
fclean: clean
		rm -f $(RM) $(NAME)
