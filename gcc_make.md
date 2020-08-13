# [Compiling, Linking and Building C/C++ Applications](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)


## 编译一个简单的 C++ 程序

```bash
$ g++ -o hello ./hello.cpp
# 如果没有执行权限
$ chmod a+x hello
$ ./hello

```

## 一些GCC编译参数

```bash
$ g++ -Wall -g -o hello ./hello.cpp
```

- -o: 指定输出的可执行文件名称
- -Wall: 输出所有的警告信息
- -g: 为 gdb 调试器生成额外的调试标记信息

## 将编译和链接分开执行

```bash
    # 使用 -c 参数，只进行编译
    $ g++ -c -Wall -g hello.cpp

    # 将目标文件链接为可执行文件
    $ g++ -g -o hello hello.o
```

## GCC 的编译过程

![GCC Compilation Process](./images/GCC_CompilationProcess.png "GCC Compilation Process")

1. 预处理
```bash
$ cpp hello.c > hello.i
```

2. 编译

```bash
$ gcc -S hello.i
```

3. 汇编

```bash
$ as -o hello.o hello.i
```

4. 链接

```bash
$ ld -o hello hello.o
```

## 使用 -v 参数显示编译过程详情

```bash
$ gcc -v -o hello hello.c
```

## 使用 file 命令查看文件类型

```bash
$ file hello.c 
#hello.c: C source, ASCII text

$ file hello.i
#hello.i: C source, ASCII text

$ file hello.s
#hello.s: assembler source, ASCII text

$ file hello.o
#hello.o: ELF 64-bit LSB relocatable, x86-64, version 1 (SYSV), not stripped
```

## 使用 nm 命令查看目标对象文件中的符号表

```bash
$ nm hello.o
0000000000000000 T main
                 U puts

$ nm hello | grep main
                 U __libc_start_main@@GLIBC_2.2.5
0000000000400586 T main                 
```

## 使用 ldd 命令列出动态链接的库文件

```bash
$ ldd hello
        linux-vdso.so.1 (0x00007ffd94eb3000)
        libc.so.6 => /lib64/libc.so.6 (0x00007fcd677e5000)
        /lib64/ld-linux-x86-64.so.2 (0x00007fcd67ba7000)
```