/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 21:26:30 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/09 21:01:57 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*re;
	size_t	size;
	size_t	strlen;

	if (ft_strlen((char *)s) <= start)
		return ((char *)ft_calloc(1, 1));
	strlen = ft_strlen((char *)s) - start;
	if (strlen < len)
		size = strlen + 1;
	else
		size = len + 1;
	re = (char *)ft_calloc(size, sizeof(char));
	if (re == NULL)
		return (NULL);
	ft_strlcpy(re, (char *)s + start, size);
	return (re);
}

// --MEMO--
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*re;
// 	size_t	size;
// 	size_t	strlen;

// 	// size =ft_strlen((char *)s)+1;
// 	if (ft_strlen((char *)s) <= start)
// 		return ((char *)ft_calloc(1, 1)); //文字列のNULL末端だけを返したい
// 	strlen = ft_strlen((char *)s) - start;
// 	if (strlen < len)
// 		size = strlen + 1;
// 	else
// 		size = len + 1;
// 	re = (char *)ft_calloc(size, sizeof(char));
// 		//アドレスが指定されていないということ　返すアドレスがないということ
// 	if (re == NULL)
// 		return (NULL);
// 	ft_strlcpy(re, (char *)s + start, size);
// 	return (re);
// }

// ft_strlcpy(re, (char *)s + start, size);確認
// 領域確保しないとセグフォ
// strlenの中身を格納させる。