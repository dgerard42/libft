/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 13:40:58 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/23 14:44:51 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t		cn;
	size_t		dlen;
	char		*cdst;
	const char	*csrc;

	cn = n;
	cdst = dst;
	csrc = src;
	while (cn != 0 && *cdst != '\0')
	{
		cdst++;
		cn--;
	}
	dlen = cdst - dst;
	cn = n - dlen;
	if (cn == 0)
		return (dlen + ft_strlen(csrc));
	while (*csrc != '\0' && cn != 1)
	{
		if (cn != 1)
		{
			*cdst++ = *csrc;
			cn--;
		}
		csrc++;
	}
	*cdst = '\0';
	return (dlen + (csrc - src));
}
