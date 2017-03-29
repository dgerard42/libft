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
	int i;
	unsigned char *scopy;

	if (n == 0)
		return (NULL);
	if (c == 0)
		return (NULL);
	i = 0;
	scopy = (unsigned char *)s;
	while (i < (int)n && scopy[i] && scopy[i] != (unsigned char)c)
		i++;
	return ((scopy[i] == (unsigned char)c) ? ((void *)(s + i)) : (NULL));
}
