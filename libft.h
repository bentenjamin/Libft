#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <string.h>

typedef struct  s_list
{
    void            *content;  
    size_t          content_size;
    struct s_list   *next;
}                   t_list;

int     ft_atoi(char *str);
int 	ft_maxminrange(int min, int max);
void 	ft_print_params(int argc, char **argv);
void 	ft_print_program_name(int argc, char **argv);
void	ft_putchar(char in);
void	ft_putnbr(int in);
void	ft_putstr(char *str);
int 	*ft_range(int min, int max);
void	ft_rev_params(int argc, char **argv);
char	*ft_strchr(char *str, char cin);
int 	ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
size_t 	ft_strlen(const char *str);
int 	ft_strnchr(char *str, char cin);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(const char *str, const char *to_find);
void	ft_swap(int *a, int *b);
void    ft_memset(void *str, int cin, size_t iin);
void    ft_bzero(void *str, size_t iin);
void    ft_memcpy(void *dst, void *src, size_t n);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strnstr(const char *hay, const char *ned, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
