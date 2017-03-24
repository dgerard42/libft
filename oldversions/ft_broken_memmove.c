/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 12:58:26 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/19 16:29:35 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	unsigned char *dst2;
	unsigned char *src2;

	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (dst < src)
		while (i < (int)len)
		{
			dst2[i] = src2[i];
			i++;
		}
	else if (dst > src)
	{
		i = (len + 1); 
		while (i > 0)
		{
			i--;
			dst2[i] = src2[i];
		}
	}
	return (dst);
}
