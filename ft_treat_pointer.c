/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:08:38 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/09/29 21:53:16 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// #include <unistd.h>

int	get_digit(unsigned long long n)
{
	int	len;

	len = 0;
	if (len == 0)
		return (1); // 0だとしても”0x0"と表示されるから0ではなく1
	while (n)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_treat_pointer(unsigned long long point)
{
	char	*hex_digit;
	int		i;
	char	*ans;

	hex_digit = "0123456789abcdef";
	i = get_digit(point) + 2;
	ans = (char *)ft_calloc(i + 3, sizeof(char));
	if (!ans)
		return (-1);
	ans[0] = '0';
	ans[1] = 'x';
	if (!point)
		ans[i - 1] = '0';
	while (point)
	{
		ans[--i] = hex_digit[point % 16];
		point = point / 16;
	}
	ft_putstr_fd(ans);
	free(ans);
	return (ft_strlen(ans));
}
