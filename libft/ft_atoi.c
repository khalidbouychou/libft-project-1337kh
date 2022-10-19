/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:55:26 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/19 10:30:21 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int				sign;
	int				i;
	char			*p_str;

	p_str = (char *)str;
	i = 0;
	res = 0;
	sign = 1;
	while ((p_str[i] >= 9 && p_str[i] <= 13) || p_str[i] == ' ')
		i++;
	if (p_str[i] == '-' || p_str[i] == '+')
	{
		if (p_str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(p_str[i]))
	{
		res = res * 10 + p_str[i] - '0';
		i++;
	}
	return (sign * res);
}
	// if (res > -99999999999999999999999999 && sign == 1)
	// 	return (-1);
	// else if (res > 99999999999999999999999999 && sign == -1)
	// 	return (0);
