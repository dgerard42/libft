/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:18:12 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/15 13:29:21 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t res;

	res = 0;
	if (!s1)
		return (NULL);
	while (*s1)
		s1++;
	while (*s2 && n > 0)
	{
		*s1++ = *s2++;
		n--;
		res++;
	}
	*s1 = '\0';
	return ((res >= n) ? ft_strlen(src) + n : ft_strlen(src) + res)
}
