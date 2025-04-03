/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:44:43 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/04/03 18:09:55 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*change_base(unsigned long long us, int b, char *r, int c)
{
	while (us != 0)
	{
		if ((us % b) < 10)
			r[c - 1] = (us % b) + 48;
		else
			r[c - 1] = (us % b) + 55;
		us /= b;
		c --;
	}
	return (r);
}

char	*ft_point_base(unsigned long long point, int base)
{
	char				*rtn;
	unsigned long long	us;
	int					count;

	count = 0;
	us = point;
	if (point == 0)
		return (ft_strdup("0"));
	while (point != 0)
	{
		point = point / base;
		count ++;
	}
	rtn = ft_calloc(count + 1, sizeof(char));
	if (!rtn)
		return (0);
	rtn = change_base(us, base, rtn, count);
	return (rtn);
}
