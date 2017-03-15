/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 12:18:09 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/15 14:40:52 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void *fresh;

	if(!(fresh = (void *)malloc(size)))
		return (NULL);
	else
		ft_bzero(fresh, size);	
		return (fresh);
}

