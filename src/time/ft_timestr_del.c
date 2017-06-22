/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_timestr_del.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 16:35:20 by bduron            #+#    #+#             */
/*   Updated: 2017/06/22 16:35:34 by bduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_timestr_del(t_timestr *time)
{
	free(time->weekday);
	free(time->day);
	free(time->month);
	free(time->hour);
	free(time->minute);
	free(time->second);
	free(time->year);
	free(time);
}
