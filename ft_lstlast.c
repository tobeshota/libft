/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:57:09 by toshota           #+#    #+#             */
/*   Updated: 2023/05/28 14:03:11 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**リストの最後のノードを返す
 * ■引数
 * #1．リストの最初のノードのポインタ
 *
 * ■返り値
 * リストの最後のノードのポインタ
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*result;

	if (lst == NULL)
		return (NULL);
	result = lst;
	while (result->next != NULL)
		result = result->next;
	return (result);
}
