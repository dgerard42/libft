/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 15:16:55 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/16 22:43:09 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((int)len > i)
	{
		if (src[j] && dst[i])
		{
			dst[i] = src[j];
			j++;
		}
		else if (src[j] == '\0')
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
