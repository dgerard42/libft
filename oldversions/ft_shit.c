/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:51:36 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/03 21:41:38 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	char *res;

	res = NULL;
	while (*big && *little)
	{
		while (*big++ == *little++)
			if (*little == '\0')
				while (*big-- == *little--)
					return ((char*)big);
		big++;
		if (big == '\0')
			return (res);
	}
}
