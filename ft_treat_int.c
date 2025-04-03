/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:05:34 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/04/03 17:05:03 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_int(int i)
{
	char	*str;
	int		n;

	str = ft_itoa(i);
	n = ft_putstr_count(str);
	free(str);
	retur (n);
}