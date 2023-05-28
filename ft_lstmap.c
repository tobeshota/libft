/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:47:11 by toshota           #+#    #+#             */
/*   Updated: 2023/05/28 18:23:05 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**'lst' の各 content に関数 'f' を適用した，新しいリストを作成する．
 *
 * ◾️引数
 * #1．ノードへのポインタのアドレス
 * #2．リストを反復処理するために使用される関数のアドレス
 * #3．必要に応じてノードの content を削除する関数のアドレス
 *
 * ◾️返り値
 * 新しいリスト．割り当てに失敗した場合には NULL
 *
 * ◾️概要
 * リスト 'lst' を反復処理し、各ノードの内容に関数 'f' を適用する．
 * 関数'f'を順次適用した結果、新しいリストを作成する．
 * del' 関数は，必要に応じてノードの内容を削除するために使用される．
 *
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*ptr;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	result = ft_lstnew(f(lst->content));
	if (result == NULL)
		return (NULL);
	ptr = result;
	while (lst->next != NULL)
	{
		lst = lst->next;
		ptr->next = ft_lstnew(f(lst->content));
		if (ptr->next == NULL)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ptr = ptr->next;
	}
	return (result);
}
