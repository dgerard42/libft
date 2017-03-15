/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 16:25:11 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/13 16:59:05 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	int i;
	int length;
	char *fresh;

	length = ft_numlen(n);
	i = (length - 1);
	fresh = ft_strnew(length + 1);
	if (n == 0)
		fresh[0] = '0';
	while (n != 0)
	{
		if (n < 0)
		{
			fresh[0] = '-';
			n = -n;
		}
		else
		{
			fresh[i] = ((n % 10) + '0');
			n = (n / 10);
			i--;
		}
	}
	return (fresh);
}
