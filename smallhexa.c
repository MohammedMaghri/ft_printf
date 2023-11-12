/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallhexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:17:53 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/12 22:59:58 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char	*revstring(char *string)
{
	char	*reversedstring;
	int		index;
	int		revindex;

	reversedstring = malloc(sizeof(char) * (lencount(string) + 1));
	if (!reversedstring)
		return (NULL);
	index = 0;
	revindex = lencount(string) - 1 ;
	while (revindex >= 0)
	{
		reversedstring[index] = string[revindex];
		index++;
		revindex--;
	}
	reversedstring[index] = '\0';
	return (reversedstring);
}

char	*smallhex(int number)
{
	int		res;
	int		index;
	char	*hexes;
	char	*allocation;
	char	*conv;

	allocation = malloc(sizeof(char) * 20);
	if (!allocation)
		return (NULL);
	res = 0;
	index = 0;
	hexes = "0123456789abcdef";
	while (number != 0)
	{
		res = number % 16;
		number = number / 16 ;
		allocation[index] = hexes[res];
		index++;
	}
	conv = revstring(allocation);
	return (conv);
}
