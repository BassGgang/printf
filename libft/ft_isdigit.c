/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:19:06 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/04/21 20:58:34 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int d)
{
	if ('0' <= d && d <= '9')
		return (1);
	else
		return (0);
}

/* int main(void)
{
	char i = '4';
	printf("mine = %d\n",ft_isdigit(i));
	printf("ans  = %d\n",isdigit(i));
	return (0);
} */