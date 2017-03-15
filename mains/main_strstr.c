/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 17:11:09 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/13 22:43:48 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char *big [4] = {
		"vincit qui se vincit", "vincit qui se vincit",
		"vincit qui se vincit", "vincit qui se se vincit"
	};

	char *little [4] = {
		"se", "", "aurelius", "se"
	};
	
	int i = 0;
	while (i < 4)
	{
		char *res;
		char *ft_res;
		res = strstr((const char*)big[i], (const char*)little[i]);
		ft_res = ft_strstr((const char*)big[i], (const char*)little[i]);
		printf("|||input ==%s, %s|||strstr ouput ==%s|||ft_strstr output ==%s|||\n", big[i], little[i], res, ft_res);
		i++;
	}
}
