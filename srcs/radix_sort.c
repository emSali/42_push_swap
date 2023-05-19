/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:22:27 by esali             #+#    #+#             */
/*   Updated: 2023/05/19 18:50:31 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_bit_size(int i)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		i = i / 2;
		count++;
	}
	return (count);
}

int	get_pos(int nr, int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (arr[i] == nr)
			return (i);
		i++;
	}
	return (0);
}

void	give_index(t_list *list, int len)
{
	int		*arr;
	int		last_ele;
	int		i;
	int		next;
	t_list	*tmp;

	arr = (int *)malloc(sizeof(int) * len);
	last_ele = -2147483648; //MIN INT
	i = 0;
	while (i < len)
	{
		tmp = list;
		next = 2147483647; //MAX INT
		while (tmp)
		{
			if ((tmp->content > last_ele) && (tmp->content < next ))
				next = tmp->content;
			tmp = tmp->next;
		}
		last_ele = next;
		arr[i] = last_ele;
		i++;
	}
	tmp = list;
	while (tmp)
	{
		tmp->content = get_pos(tmp->content, arr, len);
		tmp = tmp->next;
	}
	free(arr);
}

void	sort(t_list **a, int len)
{
	t_list	*b;
	int		i;
	int		j;
	int		num;

	give_index(*a, len);
	b = NULL;
	i = 0;
	//print_list(*a, b);
	while (i < get_bit_size(len))
	{
		len = ft_lstsize(*a) - 1;
		j = 0;
		while (j <= len)
		{
			num = (*a)->content;
			if (((num >> i) & 1) == 1)
				r(*a, 'a');
			else
				p(a, &b, 'b');
			j++;
		}
		while(b)
			p(&b, a, 'a');
		i++;
		if (is_sorted(*a))
		{
			//ft_printf("\n---------- IS SORTED --------------\n");
			return ;
		}

	}
}
