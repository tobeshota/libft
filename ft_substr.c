/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:33:23 by toshota           #+#    #+#             */
/*   Updated: 2023/05/27 19:37:19 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 文字列 s を start 文字目から len 文字ぶん返す
 *
 * 処理手順
 * startがsの長さ以上，またはlenが0なら空文字を返す
 * resultに何文字コピーするかを求める
 * mallocでコピーする文字ぶん確保する
 * strlcpyで文字列sをstart文字目からlen文字ぶんコピーする
 * resultを返す
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char *s;
// 	unsigned int start;
// 	size_t len;
// 	char *ft_result;

// 	s = "abcdefghijklmn";
// 	start = 3;
// 	len = 5;
// 	ft_result = ft_substr(s, start, len);
// 	printf("ft : %s\n", ft_result);

// 	return (0);
// }
