/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 16:44:31 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/24 01:27:04 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list *rmnode;

	rmnode = (*alst);
	del(rmnode->content, rmnode->content_size);
	free(*rmnode);
	*rmnode = NULL;
}
