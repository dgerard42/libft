/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:18:12 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/22 13:39:23 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t res;
	char *cdst;
	const char *csrc;

	res = 0;
	cdst = dst;
	csrc = src;
	while (*cdst != '\0')
		cdst++;
	while (*csrc && res < n)
	{
		*cdst++ = *csrc++;
		res++;
	}
	*cdst = '\0';
	return ((res >= n) ? ((size_t)ft_strlen(dst) + n) : ((size_t)ft_strlen(dst) + res));
}
