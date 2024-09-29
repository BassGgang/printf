/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_something.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:29:41 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/09/29 21:03:31 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "stdio.h"

int	ft_treat_something(int c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_treat_char(va_arg(args, int));
	else if (c == 's')
		len = ft_treat_string(va_arg(args, char *));
	else if (c == 'p')
		len = ft_treat_pointer(va_arg(args, void *));
}
// なぜポインタの部分がvoidなのかというと、
// ・ポインタはそもそも何かのポインタ(int とかchar とか)だけど、ここではそれを指定しない。
// →ただポインタだということだけ渡す。
// ・intが32個のバイナリで表されているのに対し、ポインタは64個のバイナリで表される。
// ・unsigned long long int も同じ６４個のバイナリで表されているので、都合がいい。
// →よって、ft_treat_pointerでは引数がunsigned long long int になっている。
// ・例えば、%pに対応するchar＊ptrがあり、pritf("%p",ptr)とされたとき、ここではargvs[2]には64個のバイナリ
// が与えられる。
// ・これをますは『ポインタとして』扱い、そこからft_treat_pointerという関数で処理をしていく。
// ・渡された64個のバイナリは10進数としても16進数としても処理をすることができ、今回は仕様として16進数を使う
