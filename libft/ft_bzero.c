/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:17:30 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/04/21 20:57:28 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;
	int				i;

	tmp = s;
	i = 0;
	while (n > 0)
	{
		tmp[i] = '\0';
		i++;
		n--;
	}
}

/* int main (void)
{
	char a[]= "0123456789";
	// bzero(a+2, 3);
	ft_bzero(a+2, 3);
	printf("gen = %s",a);
	return (0);
} */