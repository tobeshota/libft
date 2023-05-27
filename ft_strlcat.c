/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 20:23:02 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/27 19:37:06 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** destにsrcをsize文字（size - dest文字数 - 1）ぶん連結する
 *
 * ■返り値
 * size ＋ src文字数　　　（size <= dest文字数)
 * dest文字数＋src文字数　（size > dest文字数）
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	max_copy_size;

	if (dest == NULL && size == 0)
		return (ft_strlen(src));
	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	max_copy_size = size - dlen - 1;
	while (src[i] && i < max_copy_size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (slen + dlen);
}

// #include <stdio.h>

// int main(void)
// {
// 	char b[0xF] = "nyan !";
// 	strlcat(((void *)0), b, 2);
// }

// int	main(void)
// {
// 	char *src = calloc(100, sizeof(char));
// 	for (int i = 0; i < 99; i++)
// 		src[i] = i + 1;

// 	printf("ft : %zu\n", ft_strlcat(NULL, src, 0));
// 	printf("lib: %zu\n", strlcat(NULL, src, 0));
// 	return (0);
// }
