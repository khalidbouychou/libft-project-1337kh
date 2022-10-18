/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:55:26 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/18 13:30:48 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		result;
	int		sign;
	int		i;
	char	*p_str;

	p_str = (char *)str;
	i = 0;
	result = 0;
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
		result = result * 10 + p_str[i] - '0';
		i++;
	}
	return (sign * result);
}
