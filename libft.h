/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:57:37 by bwebb             #+#    #+#             */
/*   Updated: 2019/06/04 14:40:01 by bwebb            ###   ########.fr       */
/*   Updated: 2019/05/30 12:08:54 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(char *str);
int					ft_maxminrange(int min, int max);
void				ft_print_params(int argc, char **argv);
void				ft_print_program_name(int argc, char **argv);
void				ft_putchar(char in);
void				ft_putnbr(int in);
void				ft_putstr(char *str);
int					*ft_range(int min, int max);
void				ft_rev_params(int argc, char **argv);
char				*ft_strchr(char *str, char cin);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(char *src);
size_t				ft_strlen(const char *str);
int					ft_strnchr(char *str, char cin);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strstr(const char *str, const char *to_find);
void				ft_swap(int *a, int *b);
void				*ft_memset(void *str, int cin, size_t iin);
void				*ft_bzero(void *str, size_t iin);
void				*ft_memcpy(void *dst, void *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strnstr(const char *hay, const char *ned, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *str1, const void *str2, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *d, const char *s, size_t n);
char				*ft_strrchr(const char *str, char cin);
int					ft_abs(int i);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);

#endif
