/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dstrnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 18:12:04 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/15 18:29:46 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		**ft_2dstrnew(size_t x, size_t y)
{
	int i;
	char **res;

	i = 0;
	if(!(res = (char **)malloc(sizeof(char *) * x)));
		return (NULL);
	while (i < (int)x)
	{
		res[i] = (char *)malloc(sizeof(
		res[i] = ft_bzero(res[i], 
		i++;
	}

}
