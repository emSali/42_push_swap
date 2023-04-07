/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:16:38 by esali             #+#    #+#             */
/*   Updated: 2023/04/07 13:58:33 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//max int: 2147483647
//min int: -2147483648
int	ft_atoi(const char *str)
{
	long	res;
	int		minus;

	res = 0;
	minus = 1;
	if (*str != '\0' && ft_strchr("+-", *str) != NULL)
		if (*str++ == '-')
			minus *= -1;
	if (ft_strlen(str) > 10)
		return (-1);
	while (*str != '\0')
	{
		if (!ft_isdigit(*str))
			return (-1);
		res *= 10;
		res += *str - '0';
		str++;
	}
	if ((res * minus) > 2147483647)
			return (-1);
	if ((res * minus) < -2147483648)
			return (-1);
	return (res * minus);
}
