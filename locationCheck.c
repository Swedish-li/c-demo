#include <stdio.h>

void mikado(int b)
{
    int a = 5;

    printf("In mikado(), a = %d and &a = %p\n", a, &a);
    printf("In mikado(), b = %d and &b = %p\n", b, &b);
}

int main(void)
{
    int a, b;

    a = 2;
    b = 3;

    printf("In main(), a = %d and &a = %p\n", a, &a);
    printf("In main(), b = %d and &b = %p\n", b, &b);

    mikado(b);

    return 0;
}