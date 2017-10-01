/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftait <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 10:15:49 by ftait             #+#    #+#             */
/*   Updated: 2017/07/18 10:15:50 by ftait            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new;
	t_list	*newlist;

	new = *alst;
	while (new)
	{
		newlist = new->next;
		del(new->content, new->content_size);
		free(new);
		new = newlist;
	}
	*alst = NULL;
}
