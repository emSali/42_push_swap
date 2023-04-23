/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:38:11 by esali             #+#    #+#             */
/*   Updated: 2023/04/23 11:27:18 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_list *a, char ab)
{
	if (((a->content) < (a->next->next->content)) && ((a->content) > (a->next->content)))
		s(a, ab);
	else if (((a->next->next->content) < (a->content)) && ((a->next->next->content) > (a->next->content)))
		r(a, ab);
	else if (((a->content) < (a->next->content)) && ((a->content) > (a->next->next->content)))
		rr(a, ab);
	else if (((a->next->content) < (a->content)) && ((a->next->content) > (a->next->next->content)))
	{
		r(a, ab);
		s(a, ab);
	}
	else if (((a->next->next->content) < (a->next->content)) && ((a->next->next->content) > (a->content)))
	{
		rr(a, ab);
		s(a, ab);
	}
}


void	put_in_stack(t_list *from, t_list *into, char ab)
{
	int		len;
	int		pos;
	int		i;
	t_list	*tmp;

	len = ft_lstsize(into);
	tmp = into;
	pos = 0;
	while (tmp)
	{
		if (from->content < tmp->content)
			break;
		pos++;
		tmp = tmp->next;
	}
	if (len / 2 < pos)
	{
		pos = len - pos;
		i = pos + 1;
		while (pos--)
			rr(into, ab);
		p(&from, &into, ab);
		while (i --)
			r(into, ab);
	}
	else
	{
		i = pos;
		while (pos--)
			r(into, ab);
		p(&from, &into, ab);
		while(i--)
			rr(into, ab);
	}
}

void	short_sort(int len, t_list **list)
{
	t_list	*b;

	b = NULL;

	ft_printf("\nBefore sorting:");
	print_list(*list, b);

	if (len == 2)
		s(*list, 'a');
	else if (len == 3)
		sort3(*list, 'a');
	else
	{
		p(list, &b, 'b');
		if (len == 5)
			p(list, &b, 'b');
		sort3(*list, 'a');
		put_in_stack(b, *list, 'a');
	}


	ft_printf("\n\nAfter sorting:");
	print_list(*list, b);
}
