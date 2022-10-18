/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:44:32 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/18 17:06:26 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*n;
	int		i1;
	int		i2;

	n = "9844674407370955161";
	i1 = atoi(n);
	i2 = ft_atoi(n);
	printf("atoi = %d\n ft_atoi = %d", i1, i2);
}
