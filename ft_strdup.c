/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 21:21:09 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/01 13:30:50 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int i;
	const char *new;

	new = (const char*)malloc(sizeof(const char) * (ft_strlen(s1)) + 1));
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	return (new);
}
