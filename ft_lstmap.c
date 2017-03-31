/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 18:43:17 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/24 18:53:16 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *list, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*current;

	fresh = f(list);
	current = fresh;
	list = list->next;
	current = current->next;
	while (list != NULL)
	{
		current = f(list);		
		current = current->next;
		list = list->next;
	}
	return (fresh);
}
