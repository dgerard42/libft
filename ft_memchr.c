/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:58:09 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/03 13:14:17 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*memchr(const void *s, int c, size_t n)
{
	char *cs;

	cs = (char *)s;
	while (*cs)
	{
		if (*cs == (unsigned char)c)
			return(*cs);
		cs++;
	}
	return (NULL);
}
