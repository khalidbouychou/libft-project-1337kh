/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:32:19 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/18 17:51:45 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	new_string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new_string == NULL)
		return (NULL);
	if (!s1)
		s1 = ft_strdup("\0");
	else
		while (s1[i])
			new_string[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new_string[j++] = s2[i++];
	new_string[j] = '\0';
	return (new_string);
}

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	size_t	ls1;
// 	size_t	ls2;

// 	/*char	*ptr;
// 	ls1 = ft_strlen(s1);
// 	ls2 = ft_strlen(s2);
// 	ptr = malloc(ls1 + 1 + ls2 + 1);
// 	if (!s1 || !s2)
// 		return (0);
// 	if (!ptr)
// 		return (0);
// 	ft_strlcat(ptr, s1, ls1 + 1);
// 	ft_strlcat(&ptr[ls1], s2, ls2 + 1);
// 	return (ptr);
