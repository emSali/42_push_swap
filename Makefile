# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esali <esali@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 19:33:54 by esali             #+#    #+#              #
#    Updated: 2023/04/07 18:38:06 by esali            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = srcs/push_swap.c srcs/check_args.c srcs/short_sort.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror -I.

LIBFT_A = libft/libft.a
LIBFT_DIR = libft/

%.o: %.c
	gcc -c $(CFLAGS) $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) bonus -C $(LIBFT_DIR)
	gcc $(CFLAGS) $(OBJS) -fsanitize=address -g $(LIBFT_A) -o $(NAME)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(NAME) $(OBJS)

fclean:
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME) $(OBJS)

re: fclean all

re: fclean all
