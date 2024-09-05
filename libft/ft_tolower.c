/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:27:12 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/09 21:02:01 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}

// int main (void)
// {
//     char a = 'a';
//     printf("mine=%c\n",ft_tolower(a));
//     printf("gen =%c\n",tolower(a));

//     return (0);
// }