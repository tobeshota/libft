/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:22:20 by toshota           #+#    #+#             */
/*   Updated: 2023/05/28 17:51:27 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 関数 'del' と free(3) を用いて，与えられたノードとその後継のノードを削除し，解放する
 *
 * ■引数
 * #1．ノードへのポインタのアドレス
 * #2．ノードの content を削除する関数のアドレス
 *
 * ■概要
 * 関数 'del' と free(3) を用いて，与えられたノードとその後継のノードを削除し，解放する．
 * 最後に，リストへのポインタを NULL に設定する．
 *
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = *lst;
		ft_lstdelone(*lst, del);
		*lst = temp->next;
	}
}
