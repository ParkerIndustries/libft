/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:11:49 by smickael          #+#    #+#             */
/*   Updated: 2017/11/14 14:37:08 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*aside;
	size_t	i;

	i = 0;
	aside = NULL;
	if (dest < src)
	{
		aside = dest;
		while (i < len)
		{
			*(char *)dest++ = *(char *)src++;
			i++;
		}
		return (aside);
	}
	else
	{
		aside = dest;
		ft_memcpy(dest, src, len);
	}
	return (aside);
}
