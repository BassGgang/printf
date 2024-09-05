/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:59:52 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/04/21 20:58:15 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z') || ('A' <= c
			&& c <= 'Z'))
		return (1);
	else
		return (0);
}

/* int main(void)
{
	char i = 'a';cd
	printf("mine = %d\n",ft_isalnum(i));
	printf("ans  = %d\n",isalnum(i));
	return (0);
}
 */