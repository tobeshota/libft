/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:42:08 by toshota           #+#    #+#             */
/*   Updated: 2023/05/28 18:30:36 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// destからsrcに文字列をコピーする
static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// 文字列を連結する
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ptr = result;
	ft_strcpy(ptr, s1);
	ptr += ft_strlen(s1);
	ft_strcpy(ptr, s2);
	ptr += ft_strlen(s2);
	*ptr = '\0';
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *s1 = "Hello";
// 	char *s2 = "World";
// 	char *s3 = ft_strjoin(s1, s2);
// 	printf("%s\n", s3);
// 	return (0);
// }
