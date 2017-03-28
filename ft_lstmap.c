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

	current	= list;
	while (current != NULL)
	{
		fresh = f(current);
		current = current->next;
		fresh = fresh->next;
	}
	return (fresh);
}
