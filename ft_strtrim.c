/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 18:57:01 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/15 15:19:21 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_ifbefore(const char *s, int i)
{
	while (i > -1)
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n') 
			return (1);
		i--;
	}
	return (0);
}

static int		ft_ifafter(const char *s, int i)
{
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(const char *s)
{
	int j;
	int i;
	char *fresh;

	j = 0;
	i = 0;
	fresh = ft_memalloc(strlen(s));
	while (s[i])
	{
		while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		{
			if (ft_ifafter(s, i) == 0 || ft_ifbefore(s, i) == 0)
				i++;
			else 
				break; 
		}
		fresh[j] = s[i];
		j++;
		i++;
	}
	return (fresh);
}
