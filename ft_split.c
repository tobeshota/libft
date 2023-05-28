/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:43:31 by toshota           #+#    #+#             */
/*   Updated: 2023/05/28 12:56:43 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// 単語数（配列の数）を求める
static int	get_word_count(char const *str, char c)
{
	int	word_count;

	word_count = 0;
	if (str[ft_strlen(str) - 1] != c || str[0] == '\0')
		word_count++;
	while (*str && *str == c)
		str++;
	while (*str)
	{
		while (*str && *str != c)
			str++;
		if (*str)
			word_count++;
		while (*str && *str == c)
			str++;
	}
	return (word_count);
}

// 各単語の文字数を求める
static int	get_word_len(char const *str, char c)
{
	int	word_len;

	word_len = 0;
	while (str[word_len] && str[word_len] != c)
		word_len++;
	return (word_len);
}

// 単語を代入する
static int	assign_words(char const *str, char c, char **array, int i)
{
	int	word_len;

	word_len = get_word_len(str, c);
	array[i] = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!array[i])
	{
		while (i >= 0)
			free(array[i--]);
		free(array);
		return (0);
	}
	ft_strncpy(array[i], str, word_len);
	return (1);
}

/**文字列にある各文字に応じて、文字列を分割する
 *
 * 処理手順
 * 単語数（配列）の数を求める
 * ダブルポインタを確保する
 * 配列に単語を代入し（assign_words）、配列の最後には0を入れる
 *
 * 途中で確保に失敗したら，ft_splitからNULLを返すようにする
 *
 */
char	**ft_split(char const *str, char c)
{
	int		word_count;
	char	**array;
	int		i;

	if (str == NULL)
		return (NULL);
	word_count = get_word_count(str, c);
	array = (char **)(malloc(sizeof(char *) * (word_count + 1)));
	if (!array)
		return (NULL);
	i = 0;
	if (str[0] == '\0')
		array[0] = NULL;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && assign_words(str, c, array, i++) == 0)
			return (NULL);
		while (*str && *str != c)
			str++;
	}
	array[i] = NULL;
	return (array);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*str;
// 	char	c;
// 	char	**ans;
// 	int		i;

// 	str = " Tripouille";
// 	c = ' ';
// 	ans = ft_split(str, c);
// 	if (ans)
// 	{
// 		i = 0;
// 		while (ans[i])
// 		{
// 			printf("%d: %s\n", i, ans[i]);
// 			i++;
// 		}
// 		printf("%d: %s\n", i, ans[i]);
// 		i = 0;
// 		while (ans[i])
// 			free(ans[i++]);
// 		free(ans);
// 	}
// 	return (0);
// }

/* メモリリークテスト
 * main関数の下に以下を追加してコンパイルすると，実行時にメモリリークを起こしているかを確認することができる
 */
// __attribute__((destructor)) static void destructor()
// {
// 	system("leaks -q a.out");
// }
