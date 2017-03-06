/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 19:03:19 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/04 21:49:10 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char		*ft_strstr(const char *big, const char *little)
{
	const char *cbig;
	const char *clittle;

	while (*big)
	{
		cbig = big;
		clittle = little;
		while (*big == *little)
		{
			little++;
			big++;
			if (*little == '\0')
				return (cbig);
		}
		big++;

	}
}
