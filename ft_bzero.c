/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 13:07:49 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/01 20:03:47 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_bzero(void *s, size_t n)
{
	char *tmp;
	
	tmp = s;
	while (n > 0)
	{
		*tmp = 0;
		tmp++;
		n--;
	}
}
