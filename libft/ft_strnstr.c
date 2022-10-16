/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:28:11 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/11 17:36:46 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	i;
	char	*_str;

	_str = (char *)str;
	i = 0;
	if (ft_strlen(tofind) == 0)
		return (_str);
	while (i < len && *_str && *tofind)
	{
		if (_str[i] == tofind[i])
			return (_str + i);
		i++;
	}
	return (0);
}
