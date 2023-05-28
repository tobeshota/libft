/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:13:07 by toshota           #+#    #+#             */
/*   Updated: 2023/05/28 16:23:19 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 新しいリストを作る
 * ■引数
 * 新しいノードを作成時に使用するデータへのポインタ
 *
 * ■概要
 * malloc でメモリを割り当て，新しいノードを返す．
 * 変数 content はパラメータ content を使って初期化される．
 * 変数 next はNULLを使って初期化される．
 *
 * ■戻り値
 * 新しいノード
 *
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	newlst = (t_list *)malloc(sizeof(t_list));
	if (newlst == NULL)
		return (NULL);
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}
