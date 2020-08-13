#include <stdio.h>

void interchange(int *x, int *y);

int main(void)
{
    int x = 8, y = 9;

    printf("Originally x = %d, y = %d\n", x, y);

    interchange(&x, &y);

    printf("Now x = %d, y = %d\n", x, y);
}

void interchange(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}