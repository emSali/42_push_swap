/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:38:36 by esali             #+#    #+#             */
/*   Updated: 2023/05/19 18:29:28 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

void	free_list(t_list *list);
t_list	*init_check_list(int argc, char *argv[]);
void	short_sort(int len, t_list **sa);
int		is_sorted(t_list *list);
void	s(t_list *list, t_list *other, char ab);
void	r(t_list *list, t_list *other, char ab);
void	rr(t_list *list, t_list *other, char ab);
void	p(t_list **from, t_list **into, char ab);
void	sort(t_list **a, int len);
int		get_bit_size(int nb);
void	print_list(t_list *a, t_list *b);
void	print_bits(t_list *a, t_list *b);



#endif
