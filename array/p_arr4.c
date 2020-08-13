#include <stdio.h>

int main(void)
{
    int *ptr;
    int torf[2][2] = {1, 2, 3};

    ptr = torf[0];

    printf("*ptr %d *(ptr + 2) %d \n", *ptr, *(ptr + 2));

    int *ptr1;

    int fort[2][2] = {{1},
                      {5, 6}};

    ptr1 = fort[0];
    printf("*ptr1 %d *(ptr1 + 2) %d \n", *ptr1, *(ptr1 + 2));

    return 0;
}