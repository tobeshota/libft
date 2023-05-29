/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:58:30 by toshota           #+#    #+#             */
/*   Updated: 2023/05/29 18:09:58 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** リスト lst の最初に new （ノード）を追加する
 *
 * ◾️引数
 * #1．先頭ノードを指すポインタのアドレス
 * #2．リストに追加するデータのポインタのアドレス
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	new;

// 	head = malloc(sizeof(t_list));
// 	if (head == NULL)
// 		return (0);
// 	head->content = "head_content";
// 	head->next = NULL;
// 	new.content = "new_content";
// 	new.next = NULL;
// 	//	ft_lstadd_front関数の実行前， lst の先頭は lst のまま
// 	printf("before: %s\n", head->content);
// 	ft_lstadd_front(&head, &new);
// 	//	ft_lstadd_front関数の実行後， lst の先頭は new になる
// 	printf("afeter: %s\n", head->content);
// 	return (0);
// }

/** new->next = *lst; および， *lst = new; の処理について
【注記】
・引数として渡される lst は，シングルポインタ変数をアドレス渡しで受け取るものである．ダブルポインタ変数を値渡しで受け取るものではない．

■new->next = *lst; の処理について
・new の続き(new→next)を lst の先頭(lst→next)にする
・（この状態では，リストの先頭を指すのが，lstとnewのふたつある）
・（lstでみたときには何も変わっていない）
[lst]──→[lst→next]──→[lst→next→next]──→[lst→next→next→next]──→[...]
           ||代入
[new]──→[new→next]──→[...]

■*lst = new; の処理について
・シングルポインタ変数 lst に new を代入する
・（この状態によって，リスト lst の次に new がくるようになった）
[lst]   [lst→next]──→[lst→next→next]──→[lst→next→next→next]──→[...]
 ||代入     ||代入
[new]──→[new→next]──→[...]

*/

/**配列とリストとノードの差異

■配列
・データ構造の一つ
・各要素が連続したメモリ上にあるもの
・各要素の間に別の要素を加えるためには，以降の要素をずらさなくてはならない
・たとえば，配列でhelloを格納したとき，'h'の次のアドレスは'e'である（以下，図）
[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
[ ][h][e][l][l][o][ ][ ][ ][ ]
[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]

■リスト
・データ構造の一つ
・各要素が不連続なメモリ上にあるもの
・各要素の間に別の要素を加えることができる（add_frontができる）
・リストでhelloを格納したとき，'h'の次のアドレスは必ずしも'e'でない（以下，図）
[ ][ ][ ][ ][ ][ ][o][ ][ ][ ]
[ ][h][ ][ ][ ][ ][ ][ ][ ][ ]
[ ][ ][ ][ ][ ][ ][ ][ ][l][ ]
[ ][ ][ ][ ][l][ ][ ][ ][ ][ ]
[ ][ ][e][ ][ ][ ][ ][ ][ ][ ]

■ノード
・リストの各要素のこと
・リストにおけるそれぞれの要素[h]，[e]，[l]，[l]，[o]はノード

*/

/**ポインタとダブルポインタの値渡し，アドレス渡しについての説明

・型が同じ場合は「値渡し」としてコピーされる．
・ポインタで渡せば「ポインタ渡し（アドレス渡し）」としてコピーされない．

例1
━━━━━
void	add(int a)
{
	a = a + 10;
}

int	main(void)
{
	int	a;

	a = 5 ;
	add(a);			//	値変数の値渡し（∵aの型はadd関数の引数の型と一致しているため．アドレス渡しをする場合は'add(&a);'）
	printf("%d\n", a);
}



例2
━━━━━
void	hoge(int *a)
{
	...
}

int	main(void)
{
	int	*a;

	a = 0x00000005 ;
	hoge(a);			//	ポインタ変数の値渡し（∵aの型はadd関数の引数の型と一致しているため．アドレス渡しをする場合は'hoge(&a);'）
	printf("%d\n", a);
}

*/
