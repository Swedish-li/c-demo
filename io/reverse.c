#include <stdlib.h>
#include <stdio.h>

#define CNTL '\032'
#define STRLEN 81
// 随机读取文件
int main(void)
{
    char file[STRLEN];
    char ch;
    FILE *fp;
    long count, last;

    puts("Enter the file to be processed:");
    scanf("%80s", file);
    if ((fp = fopen(file, "rb")) == NULL)
    {
        fprintf(stdout, "can't open file %s\n", file);
        exit(EXIT_FAILURE);
    }

    fseek(fp, 0L, SEEK_END); // 定位到文件末尾
    last = ftell(fp);
    for (count = 1; count <= last; count++)
    {
        fseek(fp, -count, SEEK_END);
        ch = getc(fp);
        if (ch != CNTL && ch != '\r')
            putchar(ch);
    }
    putchar('\n');
    // 关闭文件
    if (fclose(fp) != 0)
    {
        fprintf(stdout, "Error in closing file \"%s\"", file);
    }
    return 0;
}