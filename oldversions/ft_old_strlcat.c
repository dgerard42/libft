/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:18:12 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/22 13:16:18 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t res;

	res = 0;
	while (*dst != '\0')
		dst++;
	while (*src && res < n)
	{
		*dst++ = *src++;
		res++;
	}
	*dst = '\0';
	return ((res >= n) ? ((size_t)ft_strlen(dst) + n) : ((size_t)ft_strlen(dst) + res));
}
