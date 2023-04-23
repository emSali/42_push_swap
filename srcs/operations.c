/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:04:22 by esali             #+#    #+#             */
/*   Updated: 2023/04/23 11:30:07 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa & sb: swaps first two list elements
void	s(t_list *list, char ab)
{
	int save;

	save = list->content;
	list->content = list->next->content;
	list->next->content = save;
	ft_printf("\n%c", 's');
	write(1, &ab, 1);
	if (ab == 'b')
		print_list(NULL, list);
	else
		print_list(list, NULL);
}

void	r(t_list *list, char ab)
{
	int	save_first;

	save_first = list->content;
	while (list->next != NULL)
	{
		list->content = list->next->content;
		list = list->next;
	}
	list->content = save_first;
	ft_printf("\n%c", 'r');
	write(1, &ab, 1);
	if (ab == 'b')
		print_list(NULL, list);
	else
		print_list(list, NULL);

}

void rr(t_list *list, char ab)
{
	int	save1;
	int	save2;

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
	ft_printf("\n%s", "rr");
	write(1, &ab, 1);
	if (ab == 'b')
		print_list(NULL, list);
	else
		print_list(list, NULL);
}

void p(t_list **from, t_list **into, char ab)
{
	t_list	*tmp;

	if (*into == NULL)
		*into = ft_lstnew((*from)->content);
	else
		ft_lstadd_front(into, ft_lstnew((*from)->content));
	tmp = (*from)->next;
	free(*from);
	*from= tmp;
	ft_printf("\n%s", "p");
	write(1, &ab, 1);
	if (ab == 'b')
		print_list(*from, *into);
	else
		print_list(*into, *from);
}
