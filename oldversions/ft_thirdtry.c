/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 18:19:57 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/04 19:00:28 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	*ft_fullmatch(const char *big, const char *little, int i, int j)
{
	int ret;
	
	ret = 0;
	while (big[i] == little[j])
	{
		i++;
		j++;
	}
	if (little == '\0')
		ret = 1;
	return (ret);
}

char		*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int fullmatch;

	i = 0;
	j = 0;
	fullmatch = 2;
	while (big[i] && little[j])
	{
		fullmatch = 0
		if (big[i] == little[j])
			fullmatch = ft_fullmatch(big, little, i, j);
		i++;
	}
	if (fullmatch == 0)
		return (big);
	if (fullmatch == 1)
		return (
	if (fullmatch == 2)
}
