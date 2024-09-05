/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:22:16 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/09 20:50:36 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*sc;

	i = 0;
	sc = (char *)s;
	while (i < (int)n)
	{
		if (sc[i] == (char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

// --MEMO---
// while(sc[i] != '\0' && i < (int) n)
// この文章ではなく、上記コードのように書くとif文が下にいらなくて、
// 必然的に条件を満たす。
// 下のTENのやつは3行上のコードの場合でNULLを探したいときにwhileが終わった次が
// 該当するのでそのポインタを返したいという意図があった。

// ---MEMO---
// memchrは文字を見ているみているわけではなくて、メモリしか見ていないので、
// 文字列内にNULLがあり、そのあとに特定の文字があった場合には、そのあとのアドレスを返す

// // ---WRITEN by MR.TEN---
// void   *ft_memchr(const void *s, int c, size_t n)
// {
//     int i;
//     char *sc;

//     i = 0;
//     sc =  (char *) s ;
//     while(i < (int) n)
//     {
//         if(sc[i] == (char) c)
//             return ((void *)&s[i]);
//         i ++;
//     }
//     if(sc[i] == (char) c)
//             return ((void *)&s[i]);
//     return (NULL);
// }

// ---MEMO---
// voidは何かにキャストしないと使えない

// --MEMO---
//     sc =  (char *) s ;
// この書き方注意

// int main (void)
// {
//     char a[] = "abc";
//     // char b[] = "cba";
//     printf("mine=%p\n",ft_memchr(a,'b',3));
//     printf("gen =%p\n",memchr(a,'b',3));
//     return (0);
// }