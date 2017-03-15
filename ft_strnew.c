/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 14:36:05 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/13 13:54:13 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	void *fresh;
	
	if(!(fresh = (char *)malloc(size)))
		return (NULL);
	ft_memset((void *)fresh, '\0', size);
	return ((char *)fresh);
}
