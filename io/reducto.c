#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 40
/**
 * 主函数
 * @param argc 命令行输入参数个数
 * @param argv 参数列表地址
 */
int main(int argc, char const *argv[])
{
    FILE *in, *out;

    char name[LEN]; // 输出文件名

    // 参数个数检查
    if (argc < 2)
    {
        // 未输入文件名，输出错误提示，退出
        fprintf(stderr, "Usage: %s filenam\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    // 设置输入文件
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        // 找不到读取的目标文件，输出错误提示，退出
        fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    // 设置输出
    strncpy(name, argv[1], LEN - 5); // 输入文件名拷贝
    name[LEN - 5] = '\0';
    strcat(name, ".red"); // 生成新的文件名

    // 以读的方式打开文件
    if ((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file \"%s\"\n", name);
        exit(EXIT_FAILURE);
    }

    int ch,        // 当前读取字符
        count = 0; // 目标文件字符计数
    // 将目标文件的数据拷贝到新文件中
    while ((ch = getc(in)) != EOF)
    {
        // 只连续3个字符中的第一个字符
        if (count++ % 3 == 0)
            putc(ch, out);
    }

    // 关闭文件释放资源
    if (fclose(in) != 0)
    {
        fprintf(stderr, "Error in closing input file \"%s\"", argv[1]);
    }
    if (fclose(out) != 0)
    {
        fprintf(stderr, "Error in closing output file \"%s\"", name);
    }
    return 0;
}
