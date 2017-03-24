/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 17:35:12 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/23 13:40:04 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	cn;
	char	*cdst;

	i = 0;
	j = 0;
	cdst = dst;
	while (dst[i] != '\0')
		i++;
	cn = (n - i - 1);
	while (src[j] != '\0' && j < cn)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (cn > 0)
		dst[i] = '\0';
	return ((j >= n) ? ((size_t)ft_strlen(cdst) + j) : ((size_t)ft_strlen(cdst) + n));
}
