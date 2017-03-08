/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 12:26:23 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/08 13:14:40 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(const char *s, unsigned int start, size_t len)
{
	int i;
	char *fresh;

	i = 0;
	if(!str)
		return (NULL);
	if(str)
		if(!(fresh = (char*)malloc(len)))
			return (NULL);
	while (i <= len)
	{	
		fresh[i] = s[i + start];
		i++;
	}
	return (fresh);
}
