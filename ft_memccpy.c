/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 13:07:49 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/02 12:45:40 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;
	char *src2;
	char *dst2;

	i = 0;
	src2 = (char *)src;
	dst2 = (char *)dst;
	while (i < (int)n)
	{
		if (src2[i] == (char)c)
			return(dst2 + i + 1);
		dst2[i] = src2[i];
		i++;
	}
	return(NULL);
}
