/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:36:49 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/09 20:53:54 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*re;
	size_t	size;

	size = ft_strlen((char *)s1) + 1;
	re = (char *)ft_calloc(size, sizeof(char));
	if (re == NULL)
		return (NULL);
	ft_strlcpy(re, (char *)s1, size);
	return (re);
}

// --MEMO--
// line 21アドレスが指定されていないということ　返すアドレスがないということ
// 1、返せるものをちゃんと返せるかどうかを確認
// 2,適当な数字を入れるのも大事
// make stdup とやると時間効率上がる
