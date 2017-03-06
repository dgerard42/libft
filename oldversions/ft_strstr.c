/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 22:37:10 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/05 00:39:09 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char		*ft_strstr(const char *big, const char *little)
{
	char	*cbig;
	char	*clittle;

	while (*big)
	{
		cbig = big;
		if (*big == *little)
		{
			while (*cbig == *little)
			{
				cbig++;
				little++;
			}
		}
		if (*little == '\0')
			return (*big);
		big++; 
	}
	return (NULL);
}

