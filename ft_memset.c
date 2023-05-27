/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:27:17 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/24 16:52:18 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// dest に c を len バイト書き込む
void	*ft_memset(void *dest, int c, size_t len)
{
	char	*p_dest;
	size_t	i;

	p_dest = (char *)dest;
	i = 0;
	while (i < len)
	{
		p_dest[i] = c;
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char libc_buf[] = "abcde";
// 	char ft_buf[] = "abcde";
// 	int c;
// 	size_t n;

// 	c = '1';
// 	n = 3;

// 	// 先頭から2バイト進めた位置に「１」を3バイト書き込む
// 	char *libc_result = (char *)memset(libc_buf, c, n);
// 	char *ft_result = (char *)ft_memset(ft_buf, c, n);

// 	printf("libc: %s\n", libc_result);
// 	printf("ft  : %s\n", ft_result);
// 	return (0);
// }
