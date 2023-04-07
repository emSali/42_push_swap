/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:43:11 by esali             #+#    #+#             */
/*   Updated: 2023/04/07 18:15:46 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//just for debugging
void print_list(t_list *list)
{
	if (list == NULL)
		return ;
	while (list)
	{
		ft_printf("\n%i", list->content);
		list = list->next;
	}
}

void free_list(t_list *list)
{
	if (list == NULL)
		return ;
	free_list(list->next);
	free(list);
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

int	main(int argc, char *argv[])
{
	t_list	*a;
	int	nr;
	int	i;

	if (argc < 2)
	{
		ft_printf("\n%s", argv[0]);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		nr = ft_atoi(argv[i]); //checks for int out of scope and other chars than digits
		if ((ft_strncmp("-1", argv[i], 2) != 0 && nr == -1) || (i != 1 && check_dups(a, nr))) // use ft_strcmp to com[are strings
		{
			ft_printf("Error\n");
			free_list(a);
			return (0);
		}
		if (i == 1)
			a = ft_lstnew(nr);
		else
			ft_lstadd_back(&a, ft_lstnew(nr));
		//ft_printf("\nargv[%i]: %s", i, argv[i]); //remove
		i++;
	}
	print_list(a);
	free_list(a);
	return (1);
}


