#include <stdio.h>

void show_msg(void);

void to_binary(unsigned long);

int main(void)
{

    unsigned long input;

    show_msg();
    while ((scanf("%lu", &input)) == 1)
    {
        to_binary(input);
        putchar('\n');
        show_msg();
    }

    printf("Done.\n");

    return 0;
}

void show_msg()
{
    printf("Enter an integer (q to quit):\n");
}

void to_binary(unsigned long number)
{
    int r;

    r = number % 2;
    if (number >= 2)
    {
        to_binary(number / 2);
    }

    putchar((r == 0) ? '0' : '1');

    return;
}