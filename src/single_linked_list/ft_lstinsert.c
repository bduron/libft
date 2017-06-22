/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 17:17:24 by bduron            #+#    #+#             */
/*   Updated: 2017/06/22 17:18:51 by bduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstinsert(t_list *dst, t_list *src)
{
	t_list *tmp;
	t_list *src_end;

	if (!src || !dst)
		return ;
	tmp = dst->next;
	dst->next = src;
	src_end = src;
	while (src_end->next)
		src_end = src_end->next;
	src_end->next = tmp;
}
