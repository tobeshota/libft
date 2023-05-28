# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toshota <toshota@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 19:52:48 by toshota           #+#    #+#              #
#    Updated: 2023/05/28 16:35:19 by toshota          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### 変数
# NAME：作成するライブラリファイルの名前
NAME	= libft.a
# CC：コンパイラ
CC		= cc
# CFLAGS：コンパイル時に使用するコンパイラオプション
CFLAGS	= -Wall -Wextra -Werror
# LIBC：ライブラリファイルを作成するコマンド
LIBC	= ar rc
# RM：オブジェクトファイルとライブラリファイルを削除するコマンド
RM		= rm -f
# INCS：インクルードディレクトリのパス
INCS	=	libft.h
# SRCS：コンパイルするC言語ソースコードのファイルパス
M_SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
			ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
			ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
			ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
B_SRCS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
# OBJS：コンパイルしたオブジェクトファイルのファイルパス（.c=.o：.c 拡張子を .o 拡張子に変換している）
OBJS	= $(M_SRCS:.c=.o)
ifdef WITH_BONUS
	OBJS	+= $(B_SRCS:.c=.o)
endif



### ルール
# $(NAME) ：ターゲットと同様に、$(OBJS) から $(NAME) を生成する
$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

# all: ぜんぶ
# make だけで make all が動く理由は，make コマンドに何も引数を与えないと自動で 一番上にあるレシピを実行するというルールがあるため
all: $(NAME)

bonus:
	make WITH_BONUS=1

# .c.o：ソースコードをオブジェクトファイルに変換する
# オブジェクトファイルに変換する
# -c：コンパイルのみを行い、リンクは行わない
# -o $(<:.c=.o)：出力ファイルの名前を指定
# -I $(INCS)：インクルードディレクトリを指定
.c.o: $(OBJS)
	$(CC) $(CFLAGS) -I $(INCS) -c $< -o $(<:.c=.o)

# オブジェクトファイル削除
clean:
	$(RM) $(OBJS) $(B_SRCS:.c=.o)

# 消す
fclean: clean
	$(RM) $(NAME)

# ぜんぶ消す
re: fclean all

# .PHONY：ターゲットと同名のファイルがあっても、ターゲットを実行する
# たとえば，clean という名前のファイルがあったとき，make clean が実行されないようにする
.PHONY: all bonus clean fclean re



### 【備考】ルールの書き方
# <コマンド名>:
# 　　　　　<呼び出されるルール>
#
# <コマンド名>: <必要なファイル>
# 　　　　<呼び出されるルール>
#
# <コマンド名>: <呼び出すコマンド名>
