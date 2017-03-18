/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:58:09 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/16 22:15:07 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	int z;
	unsigned char *cs;

	cs = (unsigned char *)s;
	z = ft_strlen((const char *)cs);
	while (z >= 0 && n > 0)
	{
		if (*cs == (unsigned char)c)
			return(cs);
		cs++;
		n--;
		z--;
	}
	return (NULL);
}
