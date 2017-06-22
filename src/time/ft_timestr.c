/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_timestr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 16:33:57 by bduron            #+#    #+#             */
/*   Updated: 2017/06/22 16:35:03 by bduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_timestr	*ft_timestr(time_t timestamp)
{
	char		*date;
	t_timestr	*time;

	time = (t_timestr*)malloc(sizeof(*time));
	date = ctime(&timestamp);
	date[ft_strlen(date) - 1] = '\0';
	time->weekday = ft_strsub(date, 0, 3);
	time->month = ft_strsub(date, 4, 3);
	time->day = ft_strsub(date, 8, 2);
	time->hour = ft_strsub(date, 11, 2);
	time->minute = ft_strsub(date, 14, 2);
	time->second = ft_strsub(date, 17, 2);
	time->year = ft_isdigit(date[20]) ?
		ft_strsub(date, 20, 4) : ft_strsub(date, 24, 5);
	return (time);
}
