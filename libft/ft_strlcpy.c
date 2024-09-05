/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:57:07 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/26 18:59:00 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int	dstsize;

	i = 0;
	dstsize = ft_strlen(dst);
	if (size == 0 || dst == NULL)
		return (ft_strlen(src));
	while (size - 1 > 0 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	// char	a[] = NULL;
// 	char	b[] = "";

// 	// printf("%s\n", a);
// 	ft_strlcpy(NULL, b, 0);
// 	printf("%lu\n", ft_strlcpy(NULL, b, 0));

//     // char ag[] = NULL;
//     char bg[] = "";
// 	strlcpy(NULL,bg,0);
//     // printf("%s\n",ag);
//     printf("%lu\n",strlcpy(NULL,bg,0));

// return (0);
// }