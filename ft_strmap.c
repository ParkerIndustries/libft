/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:11:27 by smickael          #+#    #+#             */
/*   Updated: 2017/11/14 14:55:41 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*nv;
	char	*sv;

	sv = NULL;
	if (s && f)
	{
		nv = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!nv)
			return (sv);
		ft_bzero(nv, ft_strlen(s) + 1);
		sv = nv;
		while (*s)
			*nv++ = f(*s++);
		*nv = '\0';
	}
	return (sv);
}
