# 全ての.cファイルをコンパイルして実行ファイルを作成する

CC = gcc
CFLAGS = -Wall

# すべての.cファイルをコンパイルして実行ファイルを作成する
all: $(patsubst %.c,%,$(wildcard *.c))

# 実行ファイルを作成する
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# 実行ファイルを削除する
clean:
	rm -f $(patsubst %.c,%,$(wildcard *.c))
