/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:47:16 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/29 11:52:07 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  二つの文字列をn文字まで比べる
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *s1 = "libft-";
// 	char *s2 = calloc(10, 1);

// 	strlcpy(s2, "libft", 10);
// 	unsigned int n = strlen(s1);

// 	s2[5] = CHAR_MIN;
// 	printf("lib: %d\n", strncmp(s1, s2, n));
// 	printf("ft : %d\n", ft_strncmp(s1, s2, n));
// }
