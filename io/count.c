#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    unsigned long count = 0;
    FILE *fp;
    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    char ch;

    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }

    // fclose(fp);
    if(fclose(fp) != 0)
        printf("Error in closing %s\n", argv[1]);

    printf("File %s has %lu characters\n", argv[1], count);

    return 0;
}
