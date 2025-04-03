/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:01:36 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/04/03 17:04:34 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_count(char *c)
{
	int	n;

	if (!c)
		return (0);
	n = ft_strlen(c);
	ft_putstr_fd(c, 1);
	return (n);
}