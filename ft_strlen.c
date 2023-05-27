/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:09:18 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/19 15:52:15 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 文字列の長さを計算する
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char *str;
// 	str = "aaaaa";
// 	printf("ft :%zu", ft_strlen(str + 1));
// 	printf("\n");
// 	printf("lib:%zu", strlen(str + 1));
// 	return (0);
// }
