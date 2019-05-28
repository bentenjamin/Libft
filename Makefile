# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwebb <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 15:31:17 by bwebb             #+#    #+#              #
#    Updated: 2019/05/28 17:47:45 by bwebb            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

OSRCS = *.o

FLAGS = -Wall -Werror -Wextra

Head = libft.h

GHEAD = libft.h.gch

all: $(NAME)

$(NAME):
	gcc -c -I. $(SRCS) $(FLAGS) $(HEAD)
	ar rc $(NAME) $(OSRCS) $(GHEAD)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OSRCS)
	/bin/rm -f $(GHEAD)

fclean: clean
	/bin/rm -f $(HEAD)

re: fclean all
