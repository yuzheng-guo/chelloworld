# Chelloworld C语言项目

这是一个标准的C语言项目模板，遵循良好的项目结构组织方式。

## 项目结构

```
chelloworld/
├── src/                  # 源代码目录，存放 .c 文件
├── include/              # 头文件目录，存放 .h 文件
├── build/                # 编译输出目录（编译后的 .exe 文件）
├── docs/                 # 文档目录
├── Makefile              # Make 构建脚本（用于简化编译命令）
├── README.md             # 项目说明文档
├── .gitignore            # Git 忽略文件配置
└── .git/                 # Git 版本控制目录（由 git init 自动生成）
```

## 环境要求

- GCC编译器（推荐使用MinGW-w64）
- Make工具（Windows下可使用nmake或安装make）
- Git版本控制工具

## 构建说明

### 编译项目
```bash
make
```

### 清理编译产物
```bash
make clean
```

### 重新编译
```bash
make rebuild
```

### 运行程序
```bash
make run
```

### 查看帮助
```bash
make help
```

## 开发指南

1. 将源代码文件（.c文件）放在 `src/` 目录下
2. 将头文件（.h文件）放在 `include/` 目录下
3. 编译后的可执行文件将生成在 `build/` 目录下
4. 使用 `make` 命令进行项目构建

## 注意事项

- 确保GCC编译器已正确安装并添加到系统PATH中
- 在Windows环境下，可能需要安装make工具或使用nmake
- 项目使用C99标准进行编译

## 许可证

本项目采用MIT许可证。 