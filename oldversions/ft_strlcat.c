/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:18:12 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/15 15:41:24 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *s1, const char *s2, size_t n)
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
	return ((res >= n) ? ((size_t)ft_strlen(s1) + n) : ((size_t)ft_strlen(s1) + res));
}
