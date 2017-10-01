/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftait <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 10:40:50 by ftait             #+#    #+#             */
/*   Updated: 2017/07/18 10:40:51 by ftait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	div;

	length = 0;
	while (length < size && *dst && *(dst++))
		length++;
	div = size - length;
	if (!div)
		return (length + ft_strlen(src));
	while (*src)
	{
		if (div != 1)
		{
			*(dst++) = *src;
			div--;
		}
		src++;
		length++;
	}
	*dst = '\0';
	return (length);
}
