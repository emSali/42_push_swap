# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esali <esali@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 19:33:54 by esali             #+#    #+#              #
#    Updated: 2023/03/26 19:42:41 by esali            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRCS = srcs/push_swap.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror -I. -fsanitize=address -g
RUN = ar rcs 

LIBFT_A = libft/libft.a
LIBFT_DIR = libft/

all : ${NAME}

${NAME}: ${OBJS}
	${MAKE} -C ${LIBFT_DIR} 
	cp ${LIBFT_A} ${NAME}
	gcc $(CFLAGS) ${OBJS} $(NAME) -o ${NAME}

clean:
	$(MAKE) clean -C ${LIBFT_DIR}
	$(RM) $(NAME) $(OBJS)

fclean:
	$(MAKE) fclean -C ${LIBFT_DIR}
	$(RM) $(NAME) $(OBJS)

re: fclean all