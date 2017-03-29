/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 18:40:20 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/17 13:30:18 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_islast(const char *s, int c)
{
	int i;
 
	i = (ft_strlen(s) + 1);
	while (i >= 0)
	{
		s++;
		if (*s == ((char)c))
			return (1);
		i--;
	}
	return (0);
}

char			*ft_strrchr(const char *s, int c)
{
	int i;

	i = (ft_strlen(s) + 1);
	while (i >= 0)
	{
		if (*s == ((char) c))
			if (ft_islast(s, c) == 0)
		   		return ((char*)s);
		s++;
		i--;	
	}
	return (NULL);
}
