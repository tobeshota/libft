/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:49:12 by toshota           #+#    #+#             */
/*   Updated: 2023/05/28 18:23:04 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** リストにあるノードの数をカウントする
 *
 * ◾️引数
 * #1．リストの最初のノードのポインタ
 *
 * ◾️返り値
 * ノードの数
 */
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	if (lst == NULL)
		return (0);
	count = 0;
	ptr = lst;
	if (ptr->next == NULL)
		return (1);
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
