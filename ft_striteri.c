/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 20:52:11 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/27 13:53:46 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	index;

	index = 0;
	if (s != NULL && f != NULL)
	{
		while (s[index])
		{
			f(index, &s[index]);
			index++;
		}
	}
}
