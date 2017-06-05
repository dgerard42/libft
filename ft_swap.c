/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 11:42:47 by dgerard           #+#    #+#             */
/*   Updated: 2017/06/04 15:40:00 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_swap(unsigned char *a, unsigned char *b, size_t size)
{
	unsigned char tmp;
	unsigned char *ac;
	unsigned char *bc;

	ac = a;
	bc = b;
	while (size--)
	{
		tmp = *ac;
		*ac++ = *bc;
		*bc++ = tmp;
	}
}
