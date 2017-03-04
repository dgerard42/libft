/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 12:58:26 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/02 15:57:36 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	void *tmp;
	char *dst2;
	char *src2;

	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	tmp = dst;
	while (i < (int)len)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (tmp);
}
