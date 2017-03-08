/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 12:19:36 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/06 17:06:55 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	int i;
	char *fresh;

	i = 0;
	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i])
	{
		fresh[i] = f(i, *s);
		i++;
		s++;
	}
	return (fresh);
}
