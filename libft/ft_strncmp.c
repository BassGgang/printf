/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:01:09 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/26 19:07:47 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

// ---MEMO---
// 	while(i < (int) n &&(s1[i] != '\0' || s2[i] != '\0' ))
// 	ここで i<(int)n が後ろに来ると、その前の演算子が邪魔をしてうまくいかない

// ---MEMO---
// 渡された文字列がNULLだった場合、本家でもセグフォが出るのでそこは考慮しなくて良い。

// int main (void)
// {
// 	char a[] = "abcd";
// 	char b[] = "abze";c
// 	printf("%d\n",ft_strncmp(a,b,8));
// 	printf("%d\n",strncmp(a,b,8));
//     return (0);
// }