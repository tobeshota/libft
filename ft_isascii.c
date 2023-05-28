/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:18:45 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/28 19:03:53 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 引数がASCII文字(ASCIIコード0-127番の範囲内の文字)かどうか判定する
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     for (int i = 0; i < UCHAR_MAX; ++i) {
//         if (ft_isascii(i)) {
//             // printf("%c (%x)\n", i, i);
// 			printf("%d ", i);
//         }
//     }
// }
