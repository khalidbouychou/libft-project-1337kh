/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:28:11 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/18 11:35:58 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (needle[j++] == haystack[i])
		{
			while (needle[j] && needle[j] == haystack[i + j])
				j++;
			if (!needle[j] && (i + j) <= len)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
