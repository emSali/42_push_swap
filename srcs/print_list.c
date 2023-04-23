/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:06:09 by esali             #+#    #+#             */
/*   Updated: 2023/04/23 18:06:08 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill(int i)
{
	int		count;

	count = 0;
	if (i < 0)
		count++;
	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	count = 11 - count;
	while(count--)
		ft_printf(" ");
}

void	print_list(t_list *a, t_list *b)
{
	if (a == NULL && b == NULL)
		return ;
	while (a || b)
	{
		ft_printf("\n");
		if (a != NULL) {
			ft_printf("%i    ", a->content);
			fill(a->content);
			a = a->next;
		}
		else
			ft_printf("               ");
		if (b != NULL)
		{
			ft_printf("%i", b->content);
			b = b->next;
		}
	}
	ft_printf("\n");
}
