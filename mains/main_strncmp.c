/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 13:14:05 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/12 16:15:28 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char	*s1[9] = {
		"daniella", "eliana", "cora",
		"mio", "sbogar", "snorth",
		"scollet", "angie", "sergio"
	};

	char	*s2[9] = {
		"daniella", "tammy", "elliot",
		"ian", "lou", "maelle", 
		"anastasia", "kaitlyn", "obssa"
	};

	int		n[9] = {
		7, 3, 4, 2, 14, 42, -3, 1, 3
	};

	int i = 0;
	while (i < 9)
	{
		int a = strncmp(s1[i], s2[i], (size_t)n);
		int b = ft_strncmp(s1[i], s2[i], (size_t)n);
		printf("||| library result == %d ||| ft_result == %d |||\n", a, b);
		i++;
	}	
}
