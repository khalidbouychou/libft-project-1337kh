/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:34:43 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/16 12:36:05 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	/*unsigned char	*str;
	unsigned char	*tmp;
	size_t			i;

	i = -1;
	tmp = dest;
	str = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (dest < src)
		while (++i < len)
			tmp[i] = str[i];
	else
		while (++i < len)
			tmp[len - 1 - i] = str[len - 1 - i];
	return (dest);*/

	size_t	i;
	char	*_dest;
	char	*p_src;

	i = 0;
	p_dest = (char *)dest;
	p_src = (char *)src;
	if (p_src > p_dest)
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else
	{
		while (i != n)
		{
			p_dest[n - i - 1] = p_src[n - i - 1];
			i++;
		}
	}
	return (dest);
}
