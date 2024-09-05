/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:41:04 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/26 19:42:35 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
// char	*ft_strchr(const char *s, int c)
// {
// 	int i;
// 	int sa;

// 	i = 0;
// 	while(s[i] != '\0')
// 	{
// 		sa = s[i];
// 		if (sa == c)
// 			return ((char *)&s[i]);
// 		i ++;
// 	}
// 	if (c == '\0')
// 		return ((char *)&s[i]);
// 	return (NULL);

// }
// --MEMO---
// この関数はint c に合わせてsaにてintで正誤性を処理しているが、本家はcharで処理している。
// charで処理する場合は、127を超える数字の場合、127より小さくなるまで127を引く処理を行っている
// この関数だと、int c に127を超える数字が入ってきたときにその数そのまんまを見ているので処理がずれる
// 改善策としては
// while(c <= 127)
// 	c -127;
// を入れるか、charで処理を行うかのどちらか。

// int main (void)
// {
//     char a[] = "kenta";
//     // char *b = strchr(a,'e');
//     printf("mine=%p\n",  ft_strchr(a,'z'));
//     printf("gen =%p\n",  strchr(a,'z'));
//     return (0);
// }

// ---MEMO---
// 型変換のことをキャストという
// line25>
// Q;なぜここでキャストが必要なのか。
// A;キャストがない&s[i]だとconstのアドレスを返している。
// 　戻り値として送りたいのは普通のcharだから、ふつうのcharを返さないといけない
// 　もう少し書き下すと、「変えて良いもの」のアドレスを戻り値として返していのに
// 「変えちゃいけないもの」のアドレスを送信しようとしているのでいけない。戻したい値のモノが違う。
// 　何(char *)&s[i]と、*と&が必要なのかというと、戻すバイナリーがポインターと認識させたいので。
