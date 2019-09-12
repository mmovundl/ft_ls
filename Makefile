# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/12 12:44:15 by mmovundl          #+#    #+#              #
#    Updated: 2019/09/12 13:21:09 by mmovundl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls.a

LIBFT = libft/libft.a
SRC = ft_ls.c

all = $(NAME)

$(NAME)	:
		make -C libft all
		gcc $(SRC) -o ft_ls $(LIBFT)

clean :
	make -C libft clean
	rm -f $(OBJ)

fclean : clean
	make -C libft fclean
	rm -f $(NAME)

re : fclean all
