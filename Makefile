# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 12:38:28 by mmaghri           #+#    #+#              #
#    Updated: 2023/11/16 20:32:49 by mmaghri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libftprintf.a
SRCS	= turn.c callhex.c uuuss.c lencount.c  putnum.c putstring.c paste.c ft_printf.c

OBJS	= ${SRCS:%.c=%.o}

FLAGS	= -Wall -Wextra -Werror

$(NAME): ft_printf.h
	gcc $(FLAGS) -c $(SRCS) 
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
