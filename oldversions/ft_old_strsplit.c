/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 21:16:36 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/21 22:46:29 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_count_words(const char *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		while (s[i] == c)
			i++;
		words++;
	}
	return (words);
}

char		**ft_2dstrnew(const char *s, char c)
{
	int i;
	size_t word_len;
	int words;
	char **res;
	
	i = 0;
	words = 0;
	res = (char**)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	while (s[i])
	{
		word_len = 0;
		while (s[i] && s[i] != c)
		{
			word_len++;
			i++;
		}
		while (s[i] == c)
			i++;
		res[words] = ft_memalloc(word_len + 1);
		words++;
	}
	return (res);
}

char		**ft_strsplit(const char *s, char c)
{
	char *trimmed;
	char **res;

	trimmed = ft_customtrim(s, c);
	res = ft_2dstrnew(trimmed, c);
	while (*trimmed)
	{
		while (**res && *trimmed && *trimmed != c)
		{
			**res = *trimmed;
			trimmed++;
			(*res)++;
		}	
		while (*trimmed == c)
			trimmed++;
		res++;
	}
	return (res);
}
