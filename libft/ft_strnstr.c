/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:11:26 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/26 17:32:17 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < len)
		{
			j++;
			if (j == ft_strlen((char *)s2))
				return ((char *)&s1[i]);
		}
		i++;
	}
	if (ft_strlen((char *)s2) == 0)
	{
		return ((char *)s1);
	}
	return (NULL);
}

// --MEMO--
// char	*ft_strnstr(const char *s1, const char *s2, size_t len)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	if (s1 == NULL)
// 		return (NULL);
// 	while (s1[i] != '\0' && i < (int)len)
// 	{
// 		while (s1[i + j] == s2[j] && i + j < (int)len) // s1[i +j] != 0
// && s2[j] != 0 がないと2回多く回る
// 		{
// 			// printf("%c\n",s1[i + j]);
// 			// printf("%c\n",s2[j]);
// 			// printf("%d\n",j);
// 			// printf("\n");
// 			j++;
// 		}
// 		// printf("j      = %d\n",j);
// 		// printf("strlen = %d\n",ft_strlen((char *)s2));
// 		if (j == ft_strlen((char *)s2))
// 			return ((char *)&s1[i]);
// 		i++;
// 	}
// 	if (ft_strlen((char *)s2) == 0)
// 		return ((char *)s1);
// 	return (NULL);
// }

// int main (void)
// {
// 	char a[] = "aakena";
// 	char b[] = "ken";
// 		printf("mine  =%p\n",ft_strnstr(a,b,8));
// 	printf("\n\ngen   =%p\n",strnstr(a,b,8));
//     return (0);
// }