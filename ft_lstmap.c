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

t_list			*ft_lstmap(t_list *list, t_list *(*f)(t_list *elem))
{
	t_list	*current;
	t_list	*fresh;

//	fresh = 0;
	if (!(fresh = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	current	= fresh;
	while (list != NULL)
	{
		if(!(current = (t_list*)malloc(sizeof(t_list))))
			return (NULL);
		ft_memmove(current, f(list), sizeof(t_list));
		list = list->next;
		if (!fresh)
			fresh = current;
		current = current->next;
	}
	return (fresh);
}

t_list		*ft_lstmap(t_list *list, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;

	fresh = lst;
	while (list != NULL)
	{
		fresh = f(lst);
		lst = lst->next;
		fresh = fresh->next;
	}
	return (fresh);
}
