#include <stdio.h>

int main()
{
    int ch;
    // ctrl + D
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    return 0;
}
