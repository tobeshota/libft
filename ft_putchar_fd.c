/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:39:15 by tobeshota         #+#    #+#             */
/*   Updated: 2023/05/29 18:37:17 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>
// #include <fcntl.h>

// int	main(int c, char**v)
// {
// 	// char c;
// 	int fd;
// 	close(0);
// 	free(123);
// 	/*open関数：ファイルを開く（読み取り・入力read，または書き込み・出力write）．
// 	ファイル"test.txt"にポインタ（指し示しているもの．ここでは，ポインタ変数のことでない．ポインタ⊂ポインタ変数）を代入する．
// 	プロセスができると，デフォルトで「標準入力ファイル(0番)」「標準出力ファイル（1番）」「標準エラー出力ファイル(2番)」が勝手に開かれるため，
// 	ゆえに，"test.txt"にはその次のポインタ，つまり3番が割り当てられる（fd == 3 となる）． */
// 	fd = open("test.txt", O_RDWR);	//	O_RDWR: read writeの両方を許可
// 	if (fd == -1)
// 		printf("The file doesn't exist.\n");

// 	write(fd, v[0], 10);
// 	return (0);
// }

// ソフトウェア（アプリケーションプログラム）とハードウェア（カーネル）のインターフェースをシステムコールという．
// 言い換えれば，システムコールとは，ハードウェアと直接やりとりするソフトウェアである．
// たとえば，write，read，openは，OSとのやりとりをC言語で使えるようにしたものである．

//----- ポインタとは「指し示しているもの」である -----//

/**ファイルディクリプタとは，ファイルへのポインタである．

・ファイルディクリプタとはファイル識別子である．言い換えれば，ファイルへのポインタである．
・実行されているプログラムの数をプロセスという．
・プロセスを識別するためのIDをプロセスIDという．
・プロセスができると，デフォルトで「標準入力ファイル(0番)」「標準出力ファイル（1番）」「標準エラー出力ファイル(2番)」が勝手に開かれる．
「標準入力ファイル」「標準出力ファイル」「標準エラー出力ファイル」それぞれを指すポインタが，ファイルディクリプタである．
たとえば，ファイルディクリプタ1番が，「標準出力ファイル」を指している．

write(1, &c, 1);とは，
・文字cを1文字ぶん標準出力に出力する処理のことである．言い換えれば，
・ファイルディクリプタ1番，すなわち「標準出力ファイル」に，char 型の文字 c を 1 文字ぶん書き込む処理のことである．

*/
