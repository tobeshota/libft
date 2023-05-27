/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:37:41 by tobeshota         #+#    #+#             */
/*   Updated: 2023/04/28 19:50:21 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 小文字から大文字へ変換する
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
// 	char c;
// 	c = 'i';
// 	printf("%c\n", ft_toupper(c));
// 	return (0);
// }
