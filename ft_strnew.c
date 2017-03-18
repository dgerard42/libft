/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 14:36:05 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/17 11:51:00 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *fresh;
	
	if(!(fresh = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_bzero((void *)fresh, (size + 1));
	return ((char *)fresh);
}
