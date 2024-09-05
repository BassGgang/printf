/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:23:23 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/09/05 16:47:49 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_count_output(const char *save, va_list arg)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (save[i])
	{
		if (save[i] == '%')
		{
			i++;
			c += ft_treat_something(save[i], args);
		}
	}
}

// ---MEMO---
// もし%が来たらft_treat_something()にargsとフォーマット識別子を渡す
// それ以外なら、出力する