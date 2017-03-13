/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 14:36:05 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/12 17:55:56 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	void *fresh;
	
	if(!(fresh = (char *)malloc(size)))
		return (NULL);
	ft_bzero((void *)fresh, size);
	return ((char *)fresh);
}
