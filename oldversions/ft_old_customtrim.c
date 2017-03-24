/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_customtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 18:57:01 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/20 17:33:11 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_ifcbefore(const char *s, char c)
{
	int i;
	
	i = 0;
	if (s[0] == c)
		while (s[i] == c)
			i++;
	return (i);
}

static int		ft_ifcafter(const char *s, char c)
{
	int i;

	i = (ft_strlen(s) - 1);
	if (s[ft_strlen(s) - 1] == c)
		while (s[i] == c)
			i--;
	return (ft_strlen(s) - i);
}

char			*ft_customtrim(const char *s, char c)
{
	int i;
	int j;
	char *fresh;

	j = 0;
	i = ft_ifcbefore(s, c);
	fresh = ft_memalloc((ft_strlen(s) + 1) - (ft_ifcbefore(s, c) - (ft_ifcafter(s, c))));
	while (i <= (ft_strlen(s) - ft_ifcafter(s, c)))
	{
		fresh[j] = s[i];
		j++;
		i++;
	}
	fresh[j] = '\0';
	return (fresh);
}
