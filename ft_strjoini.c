/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoini.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 14:20:30 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/24 15:29:51 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoini(const char *s1, const char *s2, size_t size)
{
	char	*fresh;

	fresh = ft_strjoin(s1, s2);
 	if (size == 1 || size == 3)
		free((void *)s1);
	else if (size == 2 || size == 3)
		free((void *)s2);
	return (fresh);
}
