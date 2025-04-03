/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:27:54 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/04/03 17:07:42 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_hexa(unsigned int i, int f)
{
	char	*hex;
	int		n;

	if (!i)
		i = 0;
	hex = ft_point_base((unsigned long long)i, 16);
	if (f == 1)
		hex = ft_tolower_all(hex);
	n = ft_putstr_count(hex);
	free(hex);
	return (n);
}