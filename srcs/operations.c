/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:04:22 by esali             #+#    #+#             */
/*   Updated: 2023/05/19 18:29:23 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa & sb: swaps first two list elements
void	s(t_list *list, t_list *other, char ab)
{
	int save;

	save = list->content;
	list->content = list->next->content;
	list->next->content = save;
	ft_printf("\n%c", 's');
	write(1, &ab, 1);
	if (ab == 'b')
		print_list(other, list);
	else
		print_list(list, other);
}

// first element becomes last
void	r(t_list *list, t_list *other, char ab)
{
	int		save_first;
	t_list	*tmp;

	tmp = list;
	save_first = list->content;
	while (list->next != NULL)
	{
		list->content = list->next->content;
		list = list->next;
	}
	list->content = save_first;
	list = tmp;
	ft_printf("\n%c", 'r');
	write(1, &ab, 1);
	if (ab == 'b')
		print_list(other, list);
	else
		print_list(list, other);

}

// last Element becomes first
void rr(t_list *list, t_list *other, char ab)
{
	int		save1;
	int		save2;
	t_list	*tmp;

	tmp = list;
	save1 = list->content;
	list->content = ft_lstlast(list)->content;
	list = list->next;
	while (list)
	{
		save2 = list->content;
		list->content = save1;
		save1 = save2;
		list = list->next;
	}
	list = tmp;
	ft_printf("\n%s", "rr");
	write(1, &ab, 1);
	if (ab == 'b')
		print_list(other, list);
	else
		print_list(list, other);
}

void p(t_list **from, t_list **into, char ab)
{
	t_list	*tmp;

	if (!from)
		return ;
	ft_lstadd_front(into, ft_lstnew((*from)->content));
	tmp = (*from)->next;
	free(*from);
	*from = tmp;
	ft_printf("\n%s", "p");
	write(1, &ab, 1);

	if (ab == 'b')
		print_list(*from, *into);
	else
		print_list(*into, *from);
}
