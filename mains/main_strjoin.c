/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 17:55:06 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/08 18:37:11 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//TEST CASES
//0.s1 empty
//1.s2 empty
//2.s1 and s2 empty
//3. normal inputs


int 		main(void)
{
	char *s1[4] = {
		"", "rose", "", "rose"
	};

	char *s2[4] = {
		"daisy", "", "", "daisy"
	};

	int i;
	char *res;

	i = 0;
	while (i < 4)
	{
		res = ft_strjoin(s1[i], s2[i]);
		printf ("%d res string = %s\n", i, res);
		i++;
	}

}
