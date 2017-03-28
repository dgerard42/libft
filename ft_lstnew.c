/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 23:14:08 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/21 16:21:09 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list		*fresh;
	void		*ccontent;

	ccontent = (void *)content;
	if(!(fresh = (t_list *)malloc(sizeof(*fresh))))
		return (NULL);
	if (content == NULL)
		fresh->content_size = 0;
	else
		if(!(fresh->content = (void *)malloc(content_size)))
			return (NULL);
	fresh->content = ccontent;
	fresh->next = NULL;
	return (fresh);
}
