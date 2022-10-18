/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:54:06 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/18 17:26:41 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_string;

	if (!s)
		return (0);
	if ((size_t)start >= ft_strlen(s))
	{
		new_string = malloc(sizeof(char) * 1);
		if (new_string == NULL)
			return (NULL);
		new_string[0] = 0;
		return (new_string);
	}
	i = -1;
	new_string = malloc(len + 1);
	if (!new_string)
		return (NULL);
	while (++i < len && *s)
		new_string[i] = s[start + i];
	new_string[i] = '\0';
	return (new_string);
}
