/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 13:15:57 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/27 20:54:42 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *ptr, size_t size)
{
	void *fresh;

	if (ptr == NULL)
	{
		fresh = (void *)malloc((size));
		ft_memdel(&ptr);
	}
	if (size == 0 && ptr)
		fresh = (void *)malloc(1);
	else
	{
		fresh = (void *)malloc((size));
		fresh = ft_memcpy(fresh, ptr, size);
		ft_memdel(&ptr);
	}
	return ((!fresh) ? NULL : fresh);
}
