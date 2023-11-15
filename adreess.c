/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adreess.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:12:49 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/15 11:17:24 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static void	merge(char *string, int *len)
{
	int		index;
	int		increment;
	char	*ox;
	char	*allocation;

	ox = "0x";
	allocation = malloc(sizeof(char) * (sizeof(string) * sizeof(ox)) + 1);
	if (!allocation)
		return ;
	index = 0;
	increment = 0;
	while (ox[increment])
		allocation[index++] = ox[increment++];
	increment = 0;
	while (string[increment])
		allocation[index++] = string[increment++];
	allocation[index] = '\0';
	putstring(allocation, len);
}

static char	*swap(char *string)
{
	int		index;
	int		lenght;
	char	*newstr;

	index = 0;
	lenght = lencount(string);
	newstr = malloc(sizeof(char) * sizeof(string) + 1);
	while (lenght != 0)
	{
		newstr[index] = string[lenght - 1];
		index++ ;
		lenght--;
	}
	newstr[index] = '\0';
	return (newstr);
}

static void	hexman(unsigned long long number, int *len)
{
	char	*allocation ;
	char	*hexanumber;
	int		index;
	int		res;
	char	*theswap;

	res = 0 ;
	allocation = (char *)malloc(sizeof(char) * 17);
	index = 0;
	hexanumber = "0123456789abcdef";
	while (number != 0)
	{
		res = number % 16 ;
		number = number / 16 ;
		allocation[index] = hexanumber[res];
		index++;
	}
	theswap = swap(allocation);
	merge(theswap, len);
}

void	allthatshit(unsigned long number, int *len)
{
	if (number == 0)
	{
		putstring("0x0", len);
		return ;
	}
	hexman(number, len);
}
