/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:54:06 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/19 09:27:06 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;

	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
	{
		tmp = (char *)malloc(sizeof(char) * 1);
		if (!tmp)
			return (NULL);
		tmp[0] = '\0';
		return (tmp);
	}
	i = -1;
	tmp = (char *)malloc(len + 1);
	if (!tmp)
		return (NULL);
	while (++i < len && *s)
		tmp[i] = s[start + i];
	tmp[i] = '\0';
	return (tmp);
}
