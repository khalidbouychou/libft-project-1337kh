/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:59:12 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/16 13:30:04 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_there_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	begin;
	size_t	end;

	i = 0;
	begin = 0;
	end = ft_strlen(s1);
	res = malloc(sizeof(char) * (end - begin + 1));
	if (res == NULL)
		return (NULL);
	while (s1[begin] && is_there_set(s1[begin], set))
		begin++;
	while (end > begin && is_there_set(s1[end - 1], set))
		end--;
	while (begin < end)
		res[i++] = s1[begin++];
	res[i] = '\0';
	return (res);
}
