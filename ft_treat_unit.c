/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_unit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:13:56 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/04/03 15:24:42 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_unbr_count(unsigned long long n)
{
	char	str;
	unsigned long long	tmp;
	size_t t;

    tmp = n;
    t = 0;
	while(9 < tmp)
	{
		tmp = tmp/10;
		t++;
	}
	if (9 < n)
		ft_put_unbr_count(n / 10);
	str = '0' + n % 10;
	write(1, &str, 1);
	return (t +1);
}

int	ft_treat_unit(unsigned long long unit)
{
	int n;

	n = 0;
	n = ft_put_unbr_count(uint, 1);
	return (n);
}

// itoa  を使わない理由として、intのはんいを超えても回らないようにしたいから