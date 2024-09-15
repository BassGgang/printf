/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_something.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:29:41 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/09/13 20:26:18 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_treat_something(int c, va_list args)
{
	int len;

	len = 0;
	if (c == 'c')
		len = ft_treat_char(va_arg(args, int));
	else if (c == 's')
		len = ft_treat_string(va_arg(args, char *));
}