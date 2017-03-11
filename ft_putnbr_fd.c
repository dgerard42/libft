/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 19:51:54 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/10 18:20:42 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int nbr, int fd)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_fd(nbr / 10);
		ft_putchar_fd('8', fd);
	}
	else if (nbr < 0)
	{
		ft_putchar_fd('-');
		nbr = -nbr;
		if (nbr / 10 != 0)
			ft_putnbr_fd(nbr /10);
		ft_putchar_fd((nbr % 10) + '0', fd);
	}
	else
	{
		if (nbr > 9)
			ft_putnbr_fd(nbr / 10);
		ft_putchar_fd((nbr % 10) + '0', fd);
	}
}
