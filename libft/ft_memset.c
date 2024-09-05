/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:13:28 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/04/21 20:58:52 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*tmp;

	i = 0;
	tmp = b;
	while (len > 0)
	{
		tmp[i] = c;
		len--;
		i++;
	}
	return (tmp);
}

/* int main(void)
{
	char a[] = "01234567";
	ft_memset(a+2, 'a', 3);
	printf("ans = %s",a);
	return (0);
} */

// int main(void)
// {
//     char a[] = "01234567";
//     memset(a+2, 'a', 3);
//     printf("ans = %s",a);
//     return (0);
// }