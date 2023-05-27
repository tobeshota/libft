/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:05:25 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/27 13:42:08 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ポインター s が指し示すメモリー領域の先頭の n バイトから最初に登場する文字 c を探す
 *
 * ◾️返り値
 * ・一致した文字へのポインター（文字が見つかった場合）
 * ・NULL（文字が見つからない場合）
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	char		ch;
	size_t		i;

	i = 0;
	ch = (char)c;
	str = (const char *)s;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s = "abcde";
// 	int			c = 'd';
// 	size_t		n;
// 	char		*str_result;
// 	char		*libc_result;
// 	char		*ft_result;

// 	n = 3;
// 	str_result = strchr(s, c);
// 	libc_result = memchr(s, c, n);
// 	ft_result = ft_memchr(s, c, n);
// 	printf("str:  %s\n", str_result);
// 	printf("libc: %s\n", libc_result);
// 	printf("ft:   %s\n", ft_result);
// 	return (0);
// }
