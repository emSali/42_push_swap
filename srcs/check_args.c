/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:20:42 by esali             #+#    #+#             */
/*   Updated: 2023/04/07 18:43:53 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *list)
{
	if (list == NULL)
		return ;
	while (list)
	{
		ft_printf("\n%i", list->content);
		list = list->next;
	}
}

// returns 1 if has dup
int	check_dups(t_list *list, int i)
{
	if (list == NULL)
		return (0);
	while (list)
	{
		if (i == list->content)
			return (1);
		list = list->next;
	}
	return (0);
}

t_list	*init_check_list(int argc, char *argv[])
{
	int		i;
	int		nr;
	t_list	*a;

	i = 1;
	while (i < argc)
	{
		nr = ft_atoi(argv[i]); //checks for int out of scope and other chars than digits
		if ((ft_strncmp("-1", argv[i], 2) != 0 && nr == -1) || (i != 1 && check_dups(a, nr))) // use ft_strcmp to com[are strings
		{
			ft_printf("Error\n");
			free_list(a);
			return (NULL);
		}
		if (i == 1)
			a = ft_lstnew(nr);
		else
			ft_lstadd_back(&a, ft_lstnew(nr));
		i++;
	}
	print_list(a);
	return (a);
}
