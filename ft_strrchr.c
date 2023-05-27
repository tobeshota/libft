/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:50:54 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/19 19:46:26 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 文字列 s 中に最後に文字 c が現れた位置へのポインターを返す
 *
 * ◾️返り値
 * ・一致した文字へのポインター（文字が見つかった場合）
 * ・NULL（文字が見つからない場合）
 */
char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;

	ch = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s;
// 	int			c;
// 	char		*libc_result;
// 	char		*ft_result;

// 	s = "abcde";
// 	c = 'd';
// 	libc_result = strrchr(s, c);
// 	ft_result = ft_strrchr(s, c);
// 	printf("libc: %s\n", libc_result);
// 	printf("ft:   %s\n", ft_result);
// 	return (0);
// }
