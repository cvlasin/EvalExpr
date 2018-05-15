# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/24 21:19:31 by cvlasin           #+#    #+#              #
#    Updated: 2017/09/28 21:52:22 by cvlasin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = eval_expr.c functions.c clear.c

MAIN = main.c

INC = eval_expr.h

ALL:
		@gcc -Wall -Wextra -Werror -o $(NAME) -I./$(INC) $(SRC) $(MAIN)

clean: 
		/bin/rm -f eval_expr
