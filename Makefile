# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 18:32:23 by mmaghri           #+#    #+#              #
#    Updated: 2023/11/12 22:57:46 by mmaghri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = smallhexa.c hexa.c ft_printf.c lencount.c numberpaste.c paste.c stringpaste.c
OBJS = ${SRC: .c=.o}
CC = CC
CFLAGS = -Wall -Wextra -Werror
NAME = printf.a
RM = rm -f 
AR = ar rcs

all : $(NAME)

$(NAME): $(OBJS) printf.h
			$(AR) $(NAME) $(OBJS)
fclean:
	rm -f $(RM) 

	