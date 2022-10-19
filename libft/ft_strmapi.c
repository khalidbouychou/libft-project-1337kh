/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:16:27 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/19 15:44:03 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	new_string = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_string == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		new_string[i] = f((unsigned int)i, s[i]);
		i++;
	}
	new_string[i] = 0;
	return (new_string);
	return (NULL);
}
