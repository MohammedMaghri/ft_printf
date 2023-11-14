/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:06:59 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/14 21:29:57 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

static void	check(const char string, va_list args, int *num)
{
	if (string == 'c')
		paste(va_arg(args, int), num);
	else if (string == 's')
		putstring(va_arg(args, char *), num);
	else if (string == 'd' || string == 'i')
		putnbr(va_arg(args, int), num);
	else if (string == 'p')
		allthatshit(va_arg(args, int), num);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		res;	
	int		index;

	index = 0;
	res = 0;
	va_start(args, string);
	while (*string)
	{
		if (*string == '%')
		{
			if (*(string + 1) == '%')
				paste('%', &res);
			string++;
			check(*string, args, &res);
			string++;
		}
		else 
			paste(*string++, &res);
	}
	return (res);
}
int main()
{
	ft_printf("%p" , 0 );
}
