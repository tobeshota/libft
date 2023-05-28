/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:09:51 by toshota           #+#    #+#             */
/*   Updated: 2023/05/28 18:23:16 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**データを削除する関数 del を使い lst の content のデータを削除する
 *
 * ◾️引数
 * #1．free するノード
 * #2．content を削除する関数のアドレス
 *
 * ◾️概要
 * データを削除する関数 del を使い lst の content のデータを削除する．
 * content 削除後，ノードを free する．
 * ノードの next は free してはならない．
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
