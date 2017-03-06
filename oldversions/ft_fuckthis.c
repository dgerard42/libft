/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 21:42:42 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/04 18:18:09 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int			ft_match(const char *big, const char *little)
{
	int i;
	int j;
	int ret;

	i = 0;
	j = 0;
	ret = 0;
	while (big[i])
	{
		while (big[i] == little[j])
		{
			
		}
	}
} */

char		*ft_strstr(const char *big, const char *little)
{
	int boole;
	int i;
	int j;

	i = 0;
	j = 0;
	boole = 42;
	while (big[i] && little[j] && boole > 0)
	{	
		boole = 1;
		while (big[i] == little[j])
		{
			i++;
			j++;
			if (*little == '\0')
				boole = 0;
		}
		i++;
	}
	printf("current boole = %d\n", boole);
	if (boole == 0)
		while (*big-- == *little--)
	else if (boole == 1)
		return (NULL);
	return ((char *)big);
}
