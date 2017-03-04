/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 15:16:55 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/03 17:15:06 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while ((int)len > i)
	{
		if (src[i] && dst[i])
			dst[i] = src[i];
		if (src[i] == '\0' && dst[i] != '\0')
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
