/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 17:11:09 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/13 22:42:39 by dgerard          ###   ########.fr       */
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

	int len[4] = {
		15, 2, 3, 3
	};
	
	int i = 0;
	while (i < 4)
	{
		char *res;
		char *ft_res;
		res = strnstr((const char*)big[i], (const char*)little[i], (size_t)len[i]);
		ft_res = ft_strnstr((const char*)big[i], (const char*)little[i], (size_t)len[i]);
		printf("|||input ==%s, %s|||strnstr ouput ==%s|||ft_strnstr output ==%s|||\n", big[i], little[i], res, ft_res);
		i++;
	}
}
