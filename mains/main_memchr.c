/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:58:53 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/02 16:27:27 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
   const char str[] = "is there anybody home";
   const char ch = 'a';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   const char str2[] = "is there anybody home";
   const char ch2 = 'a';
   char *ret2;
   
   ret2 = memchr(str2, ch2, strlen(str2));
   printf("String after |%c| is - |%s|\n", ch2, ret2);
}
