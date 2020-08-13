#include <stdio.h>
#define SIZE 4

int main(void)
{

    short dates[SIZE];
    short *pti;

    short idx;

    double bills[SIZE];
    double *ptf;

    pti = dates;
    ptf = bills;

    printf("%23s %15s\n", "short", "double");

    for (idx = 0; idx < SIZE; idx++)
    {
        printf("Poniters + %d: %10p %10p\n", idx, pti + idx, ptf + idx);
    }
    return 0;
}