/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:50:54 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/27 13:53:13 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 文字列 s 中に最初に文字 c が現れた位置へのポインターを返す
 *
 * ◾️返り値
 * ・一致した文字へのポインター（文字が見つかった場合）
 * ・NULL（文字が見つからない場合）
 *
 * int を char にキャストしてから判定する必要がある
 * ━▶︎オーバーフローしたとき，intの範囲(-2147483647 〜 2147483647)でなく，
 *   charの範囲（-128 ～ 128 = ASCIIコードの範囲）で回したいため
 */
char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s != ch)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s;
// 	int			c;
// 	char		*libc_result;
// 	char		*ft_result;

// 	s = "abcde";
// 	c = 129;
// 	libc_result = strchr(s, c);
// 	ft_result = ft_strchr(s, c);
// 	printf("libc: %s\n", libc_result);
// 	printf("ft:   %s\n", ft_result);
// 	return (0);
// }
