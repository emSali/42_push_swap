/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:06:09 by esali             #+#    #+#             */
/*   Updated: 2023/05/19 18:29:24 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//TODO: print_bits

void print_bits2(int i)
{
	if (i == 0)
		return ;
	else
	{
		print_bits2(i / 2);
		ft_printf("%i", i % 2);
		return ;
	}
}

void	fill_bits(int i)
{
	int	fill_size;

	fill_size = 8 - get_bit_size(i);
	while (fill_size--)
		ft_printf("0");
}

void	print_bits(t_list *a, t_list *b)
{
	if (a == NULL && b == NULL)
		return ;
	ft_printf("\n--------------------------");
	while (a || b)
	{
		ft_printf("\n");
		if (a != NULL) {
			fill_bits(a->content);
			print_bits2(a->content);
			a = a->next;
		}
		else
			ft_printf("        ");
		if (b != NULL)
		{
			ft_printf("  ");
			fill_bits(b->content);
			print_bits2(b->content);
			b = b->next;
		}
	}
	ft_printf("\n--------------------------\n");
}

void	fill(int i)
{
	int		count;

	count = 1;
	if (i < 0)
		count++;
	while (i >= 10 || i <= -10)
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
	ft_printf("\n--------------------------");
	while (a || b)
	{
		ft_printf("\n");
		if (a != NULL) {
			fill(a->content);
			ft_printf("%i    ", a->content);
			a = a->next;
		}
		else
			ft_printf("               ");
		if (b != NULL)
		{
			fill(b->content);
			ft_printf("%i", b->content);
			b = b->next;
		}
	}
	ft_printf("\n--------------------------\n");

}


