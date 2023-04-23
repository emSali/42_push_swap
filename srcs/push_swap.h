/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:38:36 by esali             #+#    #+#             */
/*   Updated: 2023/04/23 11:25:04 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

void	free_list(t_list *list);
t_list	*init_check_list(int argc, char *argv[]);
void	short_sort(int len, t_list **sa);
void	s(t_list *list, char ab);
void	r(t_list *list, char ab);
void	rr(t_list *list, char ab);
void	p(t_list **a, t_list **b, char ab);
void	print_list(t_list *a, t_list *b);


#endif
