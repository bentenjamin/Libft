# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwebb <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 15:31:17 by bwebb             #+#    #+#              #
#    Updated: 2019/05/30 13:09:55 by bwebb            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

OSRCS = *.o

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
