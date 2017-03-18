/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 17:14:31 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/17 13:22:31 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int i;
	int j;
	int itemp;

	i = 0;
	while (s1[i] && (int)len > i)
	{
		j = 0;
		itemp = i;
		while (s1[i] == s2[j] && s1[i] && s2[j])
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return ((char*)s1 + itemp);
		i = itemp;
		i++;
		len--;
	}
	return (NULL);
}
