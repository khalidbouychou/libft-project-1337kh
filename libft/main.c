/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:11:21 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/19 15:31:58 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int ac ,char  **av)
{
	char	**str;
	int		i;

	i = 0;
	if (ac == 3 && av[2][1] == 0)
	{
		str = ft_split(av[1], av[2][0]);
		while (str[i])
		{
			printf("str[%d] = %s\n", i, str[i]);
			i++;
		}
		if (str[i] == 0)
			printf("str[%d] = \\0\n", i);
		printf("Test: ");
		if (str && str[i] == 0)
		{
			printf("OK");
		}
		else
		{
			printf("Ko");
		}
	}
}
