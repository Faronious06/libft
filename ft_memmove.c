/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftait <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 10:31:07 by ftait             #+#    #+#             */
/*   Updated: 2017/07/18 10:31:08 by ftait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*ds;
	const char	*sr;
	size_t		i;

	i = -1;
	ds = (char *)s1;
	sr = (char *)s2;
	if (sr < ds)
		while ((int)(--n) >= 0)
			*(ds + n) = *(sr + n);
	else
		while (++i < n)
			*(ds + i) = *(sr + i);
	return (s1);
}
