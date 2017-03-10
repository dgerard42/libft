/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 18:57:01 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/09 14:58:25 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_ifbefore(const char *s, int i)
{
	while (i > -1)
	{
		if (s[i] != ' ' && s[i] != ',' && s[i] != '\t' && s[i] != '\n')
			return (1);
		i--;
	}
	return (0);
}

static int		ft_ifafter(const char *s, int i)
{
	while (s[i])
	{
		i++;
		if (s[i] != ' ' && s[i] != ',' && s[i] != '\t' && s[i] != '\n')
			return (1);
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
	printf("incrementers i = %d. j = %d.\n", i, j);
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == '\t' || s[i] == '\n')
		{
			printf("ifafter return = %d.\n", ft_ifafter(s, i));
			if (ft_ifafter(s, i) == 0)
				i = (ft_strlen(s) - 1);
			printf("ifbefore return = %d.\n", ft_ifbefore(s, i));
			if (ft_ifbefore(s, i) == 0)
				i++;
		}
		fresh[j] = s[i];
		j++;
		i++;
	}
	return (fresh);
}
