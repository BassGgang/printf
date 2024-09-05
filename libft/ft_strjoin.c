/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:03:10 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/09 20:54:01 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*re;
	size_t	size_s1;
	size_t	size_s2;
	size_t	destsize;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	destsize = size_s1 + size_s2 + 1;
	re = (char *)ft_calloc(destsize, sizeof(char));
	if (!re)
		return (NULL);
	ft_strlcat(re, s1, destsize);
	ft_strlcat(re, s2, destsize);
	return (re);
}

// --MEMO--
// 	文字列に対して変更がないものは基本的にコンスタ