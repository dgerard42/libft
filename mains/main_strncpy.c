/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 13:46:44 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/03 17:14:18 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	size_t	len;
	char	src[] = "ziggy stardust";
	char	dst[] = "is there life on mars";
		
	len = 22;

	printf("test 00 original strncpy LEN = %zu\n", len);
	printf("test 00 original strncpy src = %s\n", src);
	printf("test 00 original strncpy dst = %s\n", dst);
	strncpy(dst, src, len);
	printf("test 00 dst after strncpy = %s\n", dst);

	char	src2[] = "ziggy stardust";
	char	dst2[] = "is there life on mars";

	printf("test 00 ft_strncpy len = %zu\n", len);	
	printf("test 00 ft_strncpy src = %s\n", src2);
	printf("test 00 ft_strncpy dst = %s\n", dst2);
	ft_strncpy(dst2, src2, len);
	printf("test 00 dst after ft_strncpy = %s\n", dst2);

	size_t	len2;
	char	src3[] = "ground control to major tom";
	char	dst3[] = "we smoke astro turf on mars";
		
	len2 = 8;
	
	printf("test 01 original strncpy len = %zu\n", len2);
	printf("test 01 original strncpy src = %s\n", src3);
	printf("test 01 original strncpy dst = %s\n", dst3);
	strncpy(dst3, src3, len2);
	printf("test 01 dst after strncpy = %s\n", dst3);

	char	src4[] = "ground control to major tom";
	char	dst4[] = "we smoke astro turf on mars";

	printf("test 01 ft_strncpy len = %zu\n", len2);
	printf("test 01 ft_strncpy src = %s\n", src4);
	printf("test 01 ft_strncpy dst = %s\n", dst4);
	ft_strncpy(dst4, src4, len2);
	printf("test 00 dst after strncpy = %s\n", dst4);
}
