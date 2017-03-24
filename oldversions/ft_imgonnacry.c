/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:18:12 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/23 14:39:58 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t n)
{
	int cn;
	size_t i;
	size_t j;
	char *cdst;

	i = 0;
	j = 0;
	cn = (int)n;
	cdst = dst;
	while (dst[i] != '\0' && cn-- != 0)
		i++;
	cn = (n - i - 1);
	while (src[j] != '\0' && (int)j < cn)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (cn > 0)
		dst[i] = '\0';
	return ((j >= n) ? ((size_t)ft_strlen(cdst) + j) : ((size_t)ft_strlen(cdst) + n));
}
