/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 22:17:40 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/24 15:51:18 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_wordcount(const char *s, char c)
{
	int words;

	words = 0;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s == c)
			s++;
		words++;
	}
	return (words);
}

static char			**ft_dyn2dstrnew(const char *s, char c)
{
	int 	i;
	int 	j;
	int		k;
	char	**res;

	i = 0;
	j = 0;
	if(!(res = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		k = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			k++;
		}
		while (s[i] == c)
			i++;
		if(!(res[j] = (char *)malloc(sizeof(char) * (k + 1))))
			return (NULL);
		j++;
	}
	return (res);
}

char			**ft_strsplit(const char *s, char c)
{
	int 	i;
	int		j;
	int 	k;
	char 	*trimd;
	char 	**res;

	i = 0;
	j = 0;
	if (!s || !c)
		return (NULL);
	trimd = ft_customtrim(s, c);
	res = ft_dyn2dstrnew(trimd, c);
	while (trimd[i])
	{
		k = 0;
		while (trimd[i] && trimd[i] != c)
		{
			res[j][k] = trimd[i];
			i++;
			k++;
		}
		res[j][k] = '\0';
		while (trimd[i] == c)
			i++;
		j++;
	}
	res[j] = NULL;
	return (res);
}
