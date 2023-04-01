/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 19:43:11 by esali             #+#    #+#             */
/*   Updated: 2023/04/01 18:36:17 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		ft_printf("\n%s", argv[0]);
		return (0);
	}
	if (check_args())
	{
		ft_printf("Error\n");
		return (1);
	}
	return (1);
}
