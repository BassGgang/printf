/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:26:30 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/04/21 20:58:27 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

/* int main(void)
{
	char i = '\xE3';
	// char i = '!';
	// printf("あ is = %d",i);
	printf("mine  %d\n",ft_isascii(i));
	printf("ans  = %d\n",isascii(i));
	return (0);
} */