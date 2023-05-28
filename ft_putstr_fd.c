/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:39:55 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/28 18:28:37 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

// int	main(void)
// {
// 	char	*s;
// 	int		fd;

// 	s = strdup("hello world!");
// 	fd = 1;
// 	ft_putstr_fd(s, fd);
// 	return (0);
// }
