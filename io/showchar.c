#include <stdio.h>

void display(char c, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
        {
            putchar(c);
        }

        putchar('\n');
    }
}

int main(void)
{

    int ch;
    int rows, cols;

    puts("Enter a character and two integers:");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d", &rows, &cols) != 2)
            break;

        display(ch, rows, cols);
        // 跳过缓冲区的其它字符
        while (getchar() != '\n')
        {
            continue;
        }

        puts("Enter another character and two integers;");
        puts("Enter a newline to quit.");
    }

    puts("Bye.");
    return 0;
}
