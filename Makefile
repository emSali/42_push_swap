# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esali <esali@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 19:33:54 by esali             #+#    #+#              #
#    Updated: 2023/04/01 18:29:55 by esali            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRCS = srcs/push_swap.c srcs/check_args.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror -I.
RUN = ar rcs

LIBFT_A = libft/libft.a
LIBFT_DIR = libft/

%.o: %.c
	gcc -c $(CFLAGS) $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	gcc $(FLAGS) -c $(SRCS)
	mv *.o srcs
	gcc $(CFLAGS) $(OBJS) -fsanitize=address $(LIBFT_A) -o $(NAME)

$(OBJS): $(SRCS)
	gcc $(FLAGS) -c $(SRCS)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(NAME) $(OBJS)

fclean:
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME) $(OBJS)

re: fclean all

re: fclean all
