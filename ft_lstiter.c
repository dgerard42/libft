/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 18:24:36 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/24 18:42:54 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void(*f)(t_list *elem))
{
	t_list *current;

	current = lst;
	while (current != NULL)
	{
		f(current);
		current = current->next;
	}
}
