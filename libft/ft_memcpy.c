/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:09:11 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/16 12:34:58 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	/*char	*p_dest;
	char	*p_src;
	size_t	i;

	p_dest = (char *)dest;
	p_src = (char *)src;
	i = -1;
	if (dest == '\0')
		return (0);
	while (++i < n)
		p_dest[i] = p_src[i];
	return (p_dest);*/
	size_t	i;
	char	*_dest;
	char	*_src;

	_dest = (char *)dest;
	_src = (char *)src;
	i = 0;
	if ((_dest != NULL) && (_src != NULL))
	{
		while (i < n)
		{
			_dest[i] = _src[i];
			i++;
		}
	}
	return (dest)
}
