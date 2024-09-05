/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:23:43 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/26 19:00:19 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sc1;
	const unsigned char	*sc2;

	sc1 = s1;
	sc2 = s2;
	i = 0;
	while (i < n)
	{
		if (sc1[i] != sc2[i])
			return ((unsigned int)sc1[i] - (unsigned int)sc2[i]);
		i++;
	}
	return (0);
}
// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	int i;
// 	const char sc1;
// 	const char sc2;

// 	i = 0;
// 	while(i < (int)n)
// 	{
// 		sc1 = (const char) s1[i];
// 		sc2 = (const char) s2[i];
// 		if (sc1 != sc2)
// 			return ((int)sc1 - (int)sc2);
// 		i++;
// 	}
// 	return (0);
// }
// ---MEMO---
// const char sc1 を最初に定義して、while文でconst voidの要素を代入していくと
// この部分のコードでは、s1とs2がconst void *型で宣言されているため、
// 単純にインデックス演算子[]を使ってアクセスすることはできません。
// const voidft_ *型は実際のデータ型を特定できないため、
// コンパイラがエラーを出力しています。

// int main (void)
// {
// 	char a[] = "abcdaaaa";
// 	char b[] = "abcda";

// 	printf("%d\n",ft_memcmp(a,b,8));
// 	printf("%d\n",memcmp(a,b,8));
// }