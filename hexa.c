/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:49:38 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/12 23:00:36 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "printf.h"
#include <stddef.h>
#include <stdlib.h>

static char	*intoreverse(char *string)
{
	int		index;
	int		rev;
	char	*revert;
	char	temp ;

	revert = malloc(sizeof(char) * lencount(string) + 1);
	if (!revert)
		return (NULL);
	index = 0;
	rev = lencount(string) - 1;
	while (rev >= 0)
	{
		revert[index] = string[rev];
		index++;
		rev--;
	}
	revert[index] = '\0';
	return (revert);
}

char	*hexaconv(int number)
{
	char	*hexa;
	char	*conv;
	int		index;
	int		reminder;
	char	*res ;

	conv = (char *)malloc(sizeof(char) * 17);
	if (!conv)
		return (NULL);
	reminder = 0;
	index = 0;
	hexa = "0123456789ABCDEF";
	while (number != 0)
	{
		reminder = number % 16;
		number = number / 16 ;
		conv[index] = hexa[reminder];
		index++;
	}
	res = intoreverse(conv);
	return (res);
}
