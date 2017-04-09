/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dstrnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 22:17:40 by dgerard           #+#    #+#             */
/*   Updated: 2017/04/06 17:52:02 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_2dstrnew(size_t x, size_t y)
{
	size_t substring;
	char	**fresh;

	substring = 0;
	if(!(fresh = (char **)malloc(sizeof(char *) * (x + 1))))
		return (NULL);
	while (substring <= x)
	{
		fresh[substring] = ft_strnew(y);
		substring++;
	}
	fresh[x + 1] = NULL;
	return (fresh);
}
