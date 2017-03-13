/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 18:40:20 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/10 22:17:31 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int i;

	i = (ft_strlen(s));
	while (i > -1)
	{
		if (*s == ((char) c))
		   return ((char*)s);
		s++;
		i--;	
	}
	return (NULL);
}
