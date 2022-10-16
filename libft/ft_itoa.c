/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:04:47 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/10 14:55:40 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0 || num < 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*d;
	long	nbr;

	nbr = n;
	len = ft_nbrlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	d = malloc(sizeof(char) * len + 1);
	if (!d)
		return (0);
	d[len] = '\0';
	while (nbr > 0)
	{
		d[--len] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		d[0] = '-';
	if (n == 0)
		d[0] = '0';
	return (d);
}
