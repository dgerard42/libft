/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 16:25:11 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/13 12:24:55 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_recurse(char *fresh, int n, int i)
{
	while (i < ft_numlen(n))
	{
		if (n < 0)
		{	
			*fresh = '-';
			n = -n;
			i++;
		}
		else 
		{
			if (n > 9)
				ft_recurse(fresh++, n / 10, i);
			*fresh = ((n % 10) + '0');
			i++;
		}
	}
	return (fresh);
}

char				*ft_itoa(int n)
{
	char *fresh;

	fresh = (ft_strnew(ft_numlen(n)));
	fresh = ft_recurse(fresh, n, 0);
	return (fresh);
}
