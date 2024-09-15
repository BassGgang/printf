/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:03:43 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/09/10 18:58:48 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *input, ...)
{
	const char	*save;
	va_list		args;
	int			num;

	num = 0;
	save = ft_stardup(input); //なんでアスタリスクいらないの？→変え値がポインタだから関数の前にポインタがついてる。(int *)func()って感じ
	if (!save)
		return (0);
	va_start(args, input);
	num = ft_count_output(save, args);
	var_end(args);
	free((char *)save); // stardupでメモリの確保を行なっている為
	return (num);
	// ref from "man printf"　-> 「返り値は、出力した文字数である。エラーが発生した場合、負の数を返す。」
}
