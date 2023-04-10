/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:38:36 by esali             #+#    #+#             */
/*   Updated: 2023/04/10 16:24:28 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

void	free_list(t_list *list);
t_list	*init_check_list(int argc, char *argv[]);
void	short_sort(int len, t_list *a, char *ab);
void	s(t_list *list, char *ab);
void	print_list(t_list *list);


#endif
