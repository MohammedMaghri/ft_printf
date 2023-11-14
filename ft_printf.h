/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:01:22 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/14 20:06:39 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		lencount(char *string);
void	allthatshit(int number, int *len);
void	putnbr(long long number, int *len);
void	putstring(char *string, int *len);
void	paste(const char str, int *len);
int		ft_printf(const char *string, ...);
#endif