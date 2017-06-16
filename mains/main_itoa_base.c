/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 11:33:54 by dgerard           #+#    #+#             */
/*   Updated: 2017/06/16 11:41:23 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int				main(void)
{
	int a = 0xFFFF00;
	char *res;

	res = ft_itoa_base(a, 10);
	printf("%s\n", res);
}