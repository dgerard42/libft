#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h> //printf
#include <string.h> //memset, strcpy
#include <stdlib.h> //atoi, malloc
#include <unistd.h> //write

void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
char		*ft_strdup(const char *src);
void		*ft_memset(void *b, int c, size_t len); 

#endif
