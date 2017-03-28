/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 16:25:11 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/22 14:54:56 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	// int i;
	int length;
	int isneg;
	char *fresh;

	isneg = 1;
	length = ft_numlen(n);
	// i = (length - 1);
	if (!(fresh = malloc(sizeof(char) * (length + 1))))
		return (NULL);
	if (n == 0)
		fresh[0] = '0';
	fresh[length] = '\0';
	while (n != 0)
	{
		if (n < 0)
		{
			fresh[0] = '-';
			isneg = -1;
		}
		fresh[length - 1] = (((n % 10) * (isneg)) + '0');
		n = (n / 10);
		length--;
	}
	return (fresh);
}
