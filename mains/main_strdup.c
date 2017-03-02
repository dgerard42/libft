/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 21:41:53 by dgerard           #+#    #+#             */
/*   Updated: 2017/02/28 19:26:37 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("original string:%s\n", argv[1]);
		printf("my result:%s\n", ft_strdup(argv[1]));
		printf("real function results:%s\n", strdup(argv[1]));
	}
}
