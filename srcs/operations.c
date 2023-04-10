/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:04:22 by esali             #+#    #+#             */
/*   Updated: 2023/04/10 16:39:11 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa & sb: swaps first two list elements
void	s(t_list *list, char *ab)
{
	t_list *first;
    t_list *second;
    t_list *third;

	first = list;
	second = first->next;
	third = second->next;
    second->next = first;
    first->next = third;
    list = second;
	ft_printf("\n%s", ab);
}
