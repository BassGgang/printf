/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:38:41 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/26 19:03:05 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlcat(char *dst, char *src, size_t dstsize)
// {
//     int i;
//     int j;

//     i = ft_strlen(dst);
//     // printf("i = %d", i);
//     // printf("dest[%d] = %c\n\n\n",i,dst[i]);
//     j = 0;
//     while(dstsize - i > 0 && src[j] != '\0')//ここが間違えている
//     {
//         printf("size = %zu\n",dstsize - i);
//         dst[i] = src[j];
//         i ++;
//         j ++;
//         dstsize --;
//     }
//     return (ft_strlen(dst));
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		j;
	int		k;
	int		re;

	i = (size_t)ft_strlen(dst);
	j = 0;
	k = dstsize;
	re = i + ft_strlen(src);
	if (i >= dstsize)
		return ((size_t)ft_strlen(src) + dstsize);
	while (k - i - 1 > 0 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (re);
}

// int main(void)
// {
//     char a[] = "";
//     char b[] = "matsu";
//     ft_strlcat(a,b,8);
//     printf("a   %s\n" ,a);
// 	printf("a = %d\n", ft_strlen(a));
// 	printf("b = %d\n", ft_strlen(b));
//     printf("a   %lu\n" ,ft_strlcat(a,b,8));
// 	printf("a   =%d\n",ft_strlen(a));
// 	printf("b   =%d\n",ft_strlen(b));
// 	printf("a = %s\n", a);
//     // printf("    %s\n\n" ,a);

// 	printf("\n");

//     char ag[30] = "";
//     char bg[] = "matsu";
//     strlcat(ag,bg,8);
//     printf("ag %s\n" ,ag);
// 	printf("ag  =%d\n",ft_strlen(ag));
// 	printf("bg  =%d\n",ft_strlen(bg));
//     printf("gen %lu\n" ,strlcat(ag,bg,8));
// 	printf("ag  =%d\n",ft_strlen(ag));
// 	printf("bg  =%d\n",ft_strlen(bg));
// 	printf("ag %s\n" ,ag);
//     // printf("gen %s\n" ,ag);
//     return (0);
// }

// int main(void)
// {
// 	char ag[30] = "kenta";
// 	char a[30] = "kenta";
// 	printf("a  = %d\n", ft_strlen(a));

// 	printf("ag = %d\n", ft_strlen(ag));
// 	return (0);
// }

// //TESTER
// int	main(void)
// {
// 	char *dst1 = calloc(100, sizeof(char));
// 	char *dst2 = calloc(100, sizeof(char));

// 	char *src1 = calloc(100, sizeof(char));
// 	char *src2 = calloc(100, sizeof(char));
// 	for (int i = 0; i < 99; i++)
// 	{
// 		src1[i] = i + 1;
// 		src2[i] = i + 1;
// 	}
// 	/* 7 */ printf("mine = %lu\n",ft_strlcat(dst1, src1, 0));
// 			printf("genu = %lu\n",strlcat(dst2, src2, 0));
// 	/* 15 */printf("mine = %lu\n",ft_strlcat(dst1, src1, 10));
// 			printf("genu = %lu\n",strlcat(dst2, src2, 10));
// }