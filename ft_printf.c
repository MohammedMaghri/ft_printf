/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:08:54 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/12 22:59:24 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "printf.h"
#include <stdarg.h>

static void	checkstring(const char str, va_list args)
{
	int	index ;

	index = 0 ;
	if (str == '%')
		paste(str);
	else if (str == 'd' || (str == 'i'))
		numberpaste(va_arg(args, int));
	else if (str == 's')
		stringpaste(va_arg(args, char *));
	else if (str == 'c')
		paste(va_arg(args, int));
	else if (str == 'x')
		smallhex(va_arg(args, int));
	else if (str == 'X')
		hexaconv(va_arg(args, int));
}

int	ft_printf(const char *string, ...)
{
	va_list	arglist;
	size_t	num;

	va_start(arglist, string);
	num = 0 ;
	while (*string)
	{
		if (*string == '%')
		{
			string++ ;
			checkstring(*string, arglist);
		}
		else
			paste(*string);
		string++ ;
	}
	va_end(arglist);
	return (num);
}
int main()
{
	ft_printf("%x" ,4572 );
}
