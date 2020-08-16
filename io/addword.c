#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 41
/*
    fprintf(), fscanf(), rewind 的使用
 */
int main(void)
{
    FILE *fp;
    char words[MAX];

    char *fileName = "wordy";

    // 打开需要追加文字的文件
    if ((fp = fopen(fileName, "a+")) == NULL)
    {
        fprintf(stderr, "Can't open \"%s\"", fileName);
        exit(EXIT_FAILURE);
    }

    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");

    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
    {
        fprintf(fp, "%s\n", words);
    }

    puts("File contents:");
    rewind(fp); // 返回文件开始处

    while (fscanf(fp, "%s", words) == 1)
    {
        puts(words);
    }
    puts("Done!");

    if (fclose(fp) != 0)
    {
        fprintf(stdout, "Error in closing file \"%s\"", fileName);
    }
    return 0;
}