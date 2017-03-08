/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 12:19:36 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/06 15:52:02 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char(*f)(char))
{
	int i;
	char *fresh;

	i = 0;
	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (*s)
	{
		fresh[i] = f(*s);
		s++;
		i++;
	}
	return (fresh);
}
