/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:48:39 by mmaghri           #+#    #+#             */
/*   Updated: 2023/11/12 22:48:49 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

char	*smallhex(int number);
char	*hexaconv(int number);
int		lencount(const char *string);
void	stringpaste(char *string);
void	numberpaste(int number);
void	paste(char string);
#endif