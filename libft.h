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
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void		*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

#endif
