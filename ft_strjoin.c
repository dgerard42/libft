/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 12:26:23 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/08 18:48:07 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	int i;
	char *fresh;
	size_t len;

	i = 0;
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	if(!*s1 || !*s2)
		return (NULL);
	else
		if(!(fresh = (char*)malloc(len)))
			return (NULL);
	while (i < (int)len)
	{
		while (*s1)
		{
			fresh[i] = *s1;
			s1++;
			i++;
		}
		while (*s2)
		{
			fresh[i] = *s2;
			s2++;
			i++;
		}
		fresh[i] = '\0';
	   	i++;	
	}
	return (fresh);
}
