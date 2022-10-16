/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:40:58 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/12 09:40:29 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	*_str;

	_str = (unsigned char *)str;
	i = ft_strlen((char *)_str);
	if (!*str && !c)
		return ((char *)str);
	while (i >= 0)
	{
		if (_str[i] == c)
			return ((char *)&_str[i]);
		--i;
	}
	return (0);
}
