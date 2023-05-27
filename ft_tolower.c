/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:37:41 by tobeshota         #+#    #+#             */
/*   Updated: 2023/04/28 19:50:17 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 小文字から大文字へ変換する
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c - 'A' + 'a';
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
// 	char c;
// 	c = 'K';
// 	printf("%c\n", ft_tolower(c));
// 	return (0);
// }
