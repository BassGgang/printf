/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:21:56 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/23 15:31:17 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	is_include(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
//	この関数があっているかどうか確かめるにはどうしたらいいのか

size_t	check_start(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && is_include(s1[i], set))
		i++;
	return (i);
}

size_t	check_fin(const char *s1, const char *set)
{
	size_t	i;

	i = ft_strlen(s1);
	while (i && is_include(s1[i - 1], set))
		i--;
	return (i);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	size_t	str;
	size_t	fin;
	char	*re;

	str = check_start(s1, set);
	fin = check_fin(s1, set);
	re = ft_substr(s1, str, fin - str);
	return (re);
}

// --上から順にセット以外の文字がでてく流のを数える
// 初めてその文字列が出てきたらスターと地点
// ーー後ろから順番に数える
// 出てきたら終点地点
// それをsubstrに入れる

//関数も2つ以上使う場合には切り出すのか