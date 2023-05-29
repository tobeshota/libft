/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:38:45 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/29 18:46:31 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// destからsrcに文字列をコピーする
static char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// 文字列を複製する
char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

/*
sizeof(char)   charのサイズ　　　━▶︎   1バイト
sizeof(char *) charを指すポインタ変数のサイズ　━▶︎ 8バイト
char *の動的配列を確保したい == char の集まりをslen + 1 ぶん確保したい
*/

// #include <stdio.h>

// int	main(void)
// {
// 	char *src;
// 	char *lib;
// 	char *ft;
// 	src = "hello";
// 	lib = strdup(src);
// 	ft = ft_strdup(src);
// 	printf("lib: %s\n", lib);
// 	printf("ft : %s\n", ft);
// 	return (0);
// }
