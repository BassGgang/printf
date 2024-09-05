/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:39:28 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/26 18:03:20 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	int					i;

	d = dst;
	s = src;
	i = 0;
	if (dst == src)
		return (dst);
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dst);
}

// --MEMO--
// if (dst == src)
// 		return (dst);
// この意味がよくわかんない

/* int main (void)
{
	char a[]="0123456789";
	char b[]= "jyon";
	ft_memcpy(a+2,b,4);
	printf("gen = %s\n",a);
	return (0);
} */

// //Genuin
// int main (void)
// {
//     char a[]="kenta Matsunaga";
//     char b[]= "jyon";
//     memcpy(a+3,b+1,3);
//     printf("gen = %s\n",a);
//     return (0);
// }