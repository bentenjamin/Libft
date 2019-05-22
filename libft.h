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
int 	ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
int 	ft_strlen(char *str);
int 	ft_strnchr(char *str, char cin);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
void	ft_swap(int *a, int *b);

#endif
