/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 16:24:49 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/12 18:08:45 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main(void)
{
	int tests[8] = {
		1, 0, 42, -42, 398729, 
		-042, 042, 000
	};	

	int i = 0;
	char *fresh;

	while (i < 8)
	{
		fresh = ft_itoa(tests[i]);
		printf("||| test #%d ||| input number == %d ||| output string == %s |||\n", i, tests[i], fresh);
		i++;
	}
}
