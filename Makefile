# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwebb <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 15:31:17 by bwebb             #+#    #+#              #
#    Updated: 2019/06/12 17:23:31 by bwebb            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =\
ft_abs.c                ft_memmove.c            ft_striter.c\
ft_atoi.c               ft_memset.c             ft_striteri.c\
ft_bzero.c              ft_print_params.c       ft_strjoin.c\
ft_isalnum.c            ft_print_program_name.c ft_strlcat.c\
ft_isalpha.c            ft_putchar.c            ft_strlen.c\
ft_isascii.c            ft_putchar_fd.c         ft_strmap.c\
ft_isdigit.c            ft_putendl.c            ft_strmapi.c\
ft_isprint.c            ft_putendl_fd.c         ft_strncat.c\
ft_itoa.c               ft_putnbr.c             ft_strnchr.c\
ft_lstadd.c             ft_putnbr_fd.c          ft_strncmp.c\
ft_lstdel.c             ft_putstr.c             ft_strncpy.c\
ft_lstdelone.c          ft_putstr_fd.c          ft_strnequ.c\
ft_lstiter.c            ft_range.c              ft_strnew.c\
ft_lstmap.c             ft_rev_params.c         ft_strnstr.c\
ft_lstnew.c             ft_strcat.c             ft_strrchr.c\
ft_maxminrange.c        ft_strchr.c             ft_strsplit.c\
ft_memalloc.c           ft_strclr.c             ft_strstr.c\
ft_memccpy.c            ft_strcmp.c             ft_strsub.c\
ft_memchr.c             ft_strcpy.c             ft_strtrim.c\
ft_memcmp.c             ft_strdel.c             ft_swap.c\
ft_memcpy.c             ft_strdup.c             ft_tolower.c\
ft_memdel.c             ft_strequ.c             ft_toupper.c

OSRCS =\
ft_abs.o                ft_memmove.o            ft_striter.o\
ft_atoi.o               ft_memset.o             ft_striteri.o\
ft_bzero.o              ft_print_params.o       ft_strjoin.o\
ft_isalnum.o            ft_print_program_name.o ft_strlcat.o\
ft_isalpha.o            ft_putchar.o            ft_strlen.o\
ft_isascii.o            ft_putchar_fd.o         ft_strmap.o\
ft_isdigit.o            ft_putendl.o            ft_strmapi.o\
ft_isprint.o            ft_putendl_fd.o         ft_strncat.o\
ft_itoa.o               ft_putnbr.o             ft_strnchr.o\
ft_lstadd.o             ft_putnbr_fd.o          ft_strncmp.o\
ft_lstdel.o             ft_putstr.o             ft_strncpy.o\
ft_lstdelone.o          ft_putstr_fd.o          ft_strnequ.o\
ft_lstiter.o            ft_range.o              ft_strnew.o\
ft_lstmap.o             ft_rev_params.o         ft_strnstr.o\
ft_lstnew.o             ft_strcat.o             ft_strrchr.o\
ft_maxminrange.o        ft_strchr.o             ft_strsplit.o\
ft_memalloc.o           ft_strclr.o             ft_strstr.o\
ft_memccpy.o            ft_strcmp.o             ft_strsub.o\
ft_memchr.o             ft_strcpy.o             ft_strtrim.o\
ft_memcmp.o             ft_strdel.o             ft_swap.o\
ft_memcpy.o             ft_strdup.o             ft_tolower.o\
ft_memdel.o             ft_strequ.o             ft_toupper.o

FLAGS = -Wall -Werror -Wextra

HEAD = libft.h

GHEAD = libft.h.gch

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) $(FLAGS) $(HEAD)
	ar rc $(NAME) $(OSRCS) $(GHEAD)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OSRCS)
	/bin/rm -f $(GHEAD)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all clean
