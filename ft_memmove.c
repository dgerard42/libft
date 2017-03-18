/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 12:58:26 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/16 21:57:04 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *dst2;
	unsigned char *src2;

	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src; 
	if (dst2 < src2)
		while (i < len)
		{
			dst2[i] = src2[i];
			i++;
		}
	else 
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
