/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_if.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 16:59:47 by bduron            #+#    #+#             */
/*   Updated: 2017/06/22 17:01:34 by bduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *prev;

	prev = 0;
	tmp = *begin_list;
	while (tmp)
	{
		if ((*cmp)(tmp->content, data_ref) == 0)
		{
			if (prev == 0)
				*begin_list = tmp->next;
			else
				prev->next = tmp->next;
			free(tmp);
		}
		prev = tmp;
		tmp = tmp->next;
	}
}
