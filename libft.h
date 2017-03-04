#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h> //printf
#include <string.h> //memset, strcpy
#include <stdlib.h> //atoi, malloc
#include <unistd.h> //write

void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strcat(char *s1, const char *s2);



#endif
