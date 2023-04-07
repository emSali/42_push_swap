/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:43:11 by esali             #+#    #+#             */
/*   Updated: 2023/04/07 16:11:05 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_list(t_list *list)
{
	if (list == NULL)
		return ;
	free(list);
	free(list->next);
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
		nr = ft_atoi(argv[i]);
		if (ft_strncmp("-1", argv[i], 2) != 0 && nr == -1) // use ft_strcmp to com[are strings
		{
			ft_printf("Error\n");
			return (0);
		}
		if (i == 1)
			a = ft_lstnew(nr);
		else
			ft_lstadd_back(&a, ft_lstnew(nr));
		ft_printf("\nargv[%i]: %s", i, argv[i]); //remove
		i++;
	}
	free_list(a);
	return (1);
}


