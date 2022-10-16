/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:54:06 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/13 13:19:21 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_string;

	if (start < 0 || len < 0)
		return ((char *)s);
	i = -1;
	new_string = malloc(len - start + 1);
	if (!new_string)
		return (0);
	while (++i < len && *s)
		new_string[i] = s[start + i];
	new_string[i] = '\0';
	return (new_string);
}
