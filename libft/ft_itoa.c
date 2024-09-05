/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:24:15 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/27 18:09:17 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

// static char	*get_figure(int n, int digit, char *str)
// {
// 	while(digit >= 0)
// 	{
// 		str [digit] = n % 10 + '0';
// 		n = n /10;
// 		digit --;
// 	}
// 	return (str);
// }

char	*ft_itoa(int n)
{
	char		*str;
	int			digit;
	long int	long_int;

	long_int = (long int)n;
	digit = get_digit(long_int);
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (str == NULL)
		return (NULL);
	if (long_int == 0)
		str[0] = '0';
	if (long_int < 0)
	{
		str[0] = '-';
		long_int = long_int * -1;
	}
	str[digit] = '\0';
	digit--;
	while (long_int > 0)
	{
		str[digit] = long_int % 10 + '0';
		long_int = long_int / 10;
		digit--;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	printf("digit:%d\n", get_digit(i));
// 	printf("mine = %s\n", ft_itoa(i));
// 	return (i);
// }

// char *ft_itoa(int n)
// {
// 	char *str;

// 	printf("\n n =%d ",n);
// 	return(str);
// }