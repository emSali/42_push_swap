/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:43:11 by esali             #+#    #+#             */
/*   Updated: 2023/05/19 18:44:06 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_list(t_list *list)
{
	if (list == NULL)
		return ;
	free_list(list->next);
	free(list);
}

int	main(int argc, char *argv[])
{
	t_list	*a;

	if (argc == 1)
		return (0);
	a = init_check_list(argc, argv);
	if (a == NULL)
		return (0);
	if (argc == 2)
		return (0);
	else if (argc <= 6) // max 5 elements
		short_sort(argc - 1, &a);
	else
		sort(&a, argc - 1);
	free_list(a);
	return (1);
}


