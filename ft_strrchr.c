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

int				ft_islast(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i > -1)
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

	i = (ft_strlen(s));
	while (i > -1)
	{
		if (*s == ((char) c))
			if (ft_islast(s, c) == 0)
		   		return ((char*)s);
			else
				s++;
		else
			s++;
		i--;	
	}
	return (NULL);
}
