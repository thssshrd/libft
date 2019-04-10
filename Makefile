# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzubat <tzubat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/11 14:07:04 by tzubat            #+#    #+#              #
#    Updated: 2019/04/07 15:24:28 by tzubat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILEFLAGS = -Wall -Werror -Wextra
CSRC = ./*.c
HSRC = ./includes/
OBJECT = *.o
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc $(COMPILEFLAGS) -c $(CSRC)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
