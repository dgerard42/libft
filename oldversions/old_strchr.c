/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   old_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 22:17:49 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/10 22:23:33 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*old_strchr(const char *s, int c)
{
	while (-1 <= (ft_strlen(s)))
	{
		if (*s == (char)c)
			return((char*)s);
		s++;
	}
	return (NULL);
}