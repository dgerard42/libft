/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:58:09 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/05 16:21:29 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*memchr(const void *s, int c, size_t n)
{
	char *cs;

	cs = (char *)s;
	while (*cs && n > 0)
	{
		if (*cs == (unsigned char)c)
			return(cs);
		cs++;
		n--;
	}
	return (NULL);
}
