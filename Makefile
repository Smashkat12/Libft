# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 13:51:43 by kmorulan          #+#    #+#              #
#    Updated: 2019/05/28 13:52:21 by kmorulan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
ARC = ar rc
SRC = *.c
OBJ = *.o

# all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	$(ARC) $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all




