/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:06:09 by esali             #+#    #+#             */
/*   Updated: 2023/04/23 11:04:23 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *fill(int i)
{
	int		count;
	char	*str;

	count = 0;
	if (i < 0)
		count++;
	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	count = 11 - count;
	str = "";
	while(count)
	{
		str = ft_strjoin(str, " ");
		count--;
	}
	return (str);
}

void	print_list(t_list *a, t_list *b)
{
	if (a == NULL && b == NULL)
		return ;
	while (a || b)
	{
		ft_printf("\n");
		if (a != NULL) {
			ft_printf("%i          ", a->content);
			fill(a->content);
			a = a->next;
		}
		else
			ft_printf("                     ");
		if (b != NULL)
		{
			ft_printf("%i", b->content);
			b = b->next;
		}
	}
	ft_printf("\n");
}
