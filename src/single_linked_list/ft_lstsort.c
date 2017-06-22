/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 15:28:48 by bduron            #+#    #+#             */
/*   Updated: 2017/06/22 16:25:32 by bduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*sortedmerge(t_list *a, t_list *b, int (*lstcmp)())
{
	t_list *result;

	result = NULL;
	if (a == NULL)
		return (b);
	else if (b == NULL)
		return (a);
	if (lstcmp(a, b) < 0)
	{
		result = a;
		result->next = sortedmerge(a->next, b, lstcmp);
	}
	else
	{
		result = b;
		result->next = sortedmerge(a, b->next, lstcmp);
	}
	return (result);
}

static void		ft_lstsplit(t_list *source, t_list **front, t_list **back)
{
	t_list *fast;
	t_list *slow;

	if (source == NULL || source->next == NULL)
	{
		*front = source;
		*back = NULL;
	}
	else
	{
		slow = source;
		fast = source->next;
		while (fast != NULL)
		{
			fast = fast->next;
			if (fast != NULL)
			{
				slow = slow->next;
				fast = fast->next;
			}
		}
		*front = source;
		*back = slow->next;
		slow->next = NULL;
	}
}

void			ft_lstsort(t_list **headref, int (*lstcmp)())
{
	t_list *head;
	t_list *a;
	t_list *b;

	head = *headref;
	if ((head == NULL) || (head->next == NULL))
		return ;
	ft_lstsplit(head, &a, &b);
	ft_lstsort(&a, lstcmp);
	ft_lstsort(&b, lstcmp);
	*headref = sortedmerge(a, b, lstcmp);
}
