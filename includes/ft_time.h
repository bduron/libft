/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_time.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 16:36:57 by bduron            #+#    #+#             */
/*   Updated: 2017/06/22 18:34:02 by bduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TIME_H
# define FT_TIME_H

# include <time.h>
# include "libft.h"

typedef struct	s_timestr
{
	char *weekday;
	char *month;
	char *day;
	char *hour;
	char *minute;
	char *second;
	char *year;
}				t_timestr;

t_timestr		*ft_timestr(time_t timestamp);
void			ft_timestr_del(t_timestr *time);
int				ft_time_isrecent(time_t event);

#endif
