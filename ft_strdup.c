/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 21:21:09 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/02 20:56:43 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char *new;
	char *cs1;
	char *result;

	cs1 = (char *)s1;
	new = (char *)malloc(sizeof(char) * (ft_strlen(cs1)) + 1);
	result = new;
	while (*cs1 != '\0')
		*new++ = *cs1++;
	*new = '\0';
	return (result);
}
