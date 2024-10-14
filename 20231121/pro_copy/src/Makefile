.PHONY:process_copy#伪目标，避免文件夹中有与最终程序同名文件，导致无法编译
INCLUDE_PATH=../include/
CFLAGS=-I$(INCLUDE PATH) -Wall -g -c
CPPFLAGS=
DFLAGS=
INSTALL_PATH=/usr/bin/
LIBRARY_PATH=../library
CC=gcc
#文件名获取与转换
SRCFILE =$(wildcard *.c )#返回字符串，包含说有.c后缀的文件名
DESTFILE =$(patsubst %.c,%.0,$(SRCFILE))#将,c后缀的字符串 全部替换为.。 字符>串处理
TARGET=process_copy

#主目标，将所有生成的核心二进制.o链接到一起变为应用程序
S(TARGET):$(DESTFILE)
        $(CC)$^ -o $@
#从目标，二进制生成，c生成.0使用内建语法
%.0:%.C
        $(CC) $(CFLAGS) $<
#功能目标

clean:
        rm -rf $(DESTFILE)
install:

distclean:

