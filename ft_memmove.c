/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:58:19 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/29 19:24:54 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memrcpy(void *dest, void *src, size_t len)
{
	char	*ptr_dest;
	char	*ptr_src;

	if ((dest == NULL && src == NULL) || len == 0)
		return (dest);
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	while (len > 0)
	{
		len--;
		ptr_dest[len] = ptr_src[len];
	}
	return (dest);
}

// memoveは，destとsrcの領域が重なっているときに，src の領域が上書きされないようにコピーする
// memcpyは，destとsrcの領域が重なっているときに，src の領域が上書きされてしまう
void	*ft_memmove(void *dest, void *src, size_t len)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, len);
	else
		ft_memrcpy(dest, src, len);
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *src = malloc(100);
// 	for (int i = 0; i < 100; i++)
// 		src[i] = i;
// 	char *dst = malloc(100);
// 	/* 1 */ ft_memmove(dst, src, 0);
// 	/* 2 */ ft_memmove(dst, src, 10);
// 	/* 2 */ ft_memmove(dst, src, 100);
// 	/* 3 forward overlap */ ft_memmove(dst + 42, dst, 50);
// 	/* 4 backward overlap*/ ft_memmove(dst, dst + 21, 50);
// 	return (0);
// }
