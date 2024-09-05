/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 08:26:14 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/16 15:59:01 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			bytes;
	int				i;
	unsigned char	*mem;

	bytes = count * size;
	if (count != 0)
	{
		if (bytes / count != size)
			return (NULL);
	}
	mem = (unsigned char *)malloc(bytes);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < bytes)
		mem[i++] = 0;
	return ((void *)mem);
}
