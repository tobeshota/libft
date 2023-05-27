/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:30:38 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/27 18:45:17 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 部分文字列 needle が検索された len 文字より少ない文字列 haystack の中で最初に現れる位置を見つける
 * ◾️引数
 * ・検索対象のメモリブロック haystack
 * ・検索文字列             needle
 * ．検索バイト数           len
 * ◾️返り値
 * ・一致した文字へのポインター（文字列が見つかった場合）
 * ・NULL（文字列が見つからない場合）
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (haystack == NULL && len == 0)
		return (NULL);
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && needle_len <= len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char *haystack = "123456789";
// 	const char *needle = "56";
// 	unsigned int len;
// 	len = 6;
// 	char *libc_result = strnstr(haystack, needle, len);
// 	char *ft_result = ft_strnstr(haystack, needle, len);
// 	printf("libc: %s\n", libc_result);
// 	printf("ft:   %s\n", ft_result);
// 	return (0);
// }
