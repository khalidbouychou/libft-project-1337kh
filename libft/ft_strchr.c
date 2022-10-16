/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:40:20 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/16 13:23:39 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*first_occurence;

	i = 0;
	first_occurence = NULL;
	if (!s)
		return (NULL);
	if (c == 0)
		return ((char *)&s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			first_occurence = (char *)&s[i];
			break ;
		}
		i++;
	}
	return (first_occurence);