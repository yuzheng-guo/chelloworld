# C语言项目 Makefile
# 适用于Windows环境

# 编译器设置
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -I./include

# 目录设置
SRCDIR = src
INCDIR = include
BUILDDIR = build
TARGET = $(BUILDDIR)/chelloworld.exe

# 源文件
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(SOURCES:$(SRCDIR)/%.c=$(BUILDDIR)/%.o)

# 默认目标
all: $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

# 编译源文件为目标文件
$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理编译产物
clean:
	del /Q $(BUILDDIR)\*.o $(TARGET) 2>nul || echo 清理完成

# 重新编译
rebuild: clean all

# 运行程序
run: $(TARGET)
	$(TARGET)

# 显示帮助信息
help:
	@echo 可用的目标:
	@echo   all     - 编译项目
	@echo   clean   - 清理编译产物
	@echo   rebuild - 重新编译
	@echo   run     - 运行程序
	@echo   help    - 显示此帮助信息

.PHONY: all clean rebuild run help 