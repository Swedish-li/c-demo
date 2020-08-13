#include <stdio.h>
#define SIZE 5

long sum(int *start, int *end);

int main(void)
{
    int mariable[SIZE] = {1, 2, 3, 4, 5};

    long total = sum(mariable, mariable + SIZE);

    printf("The total number of marbles is %ld\n", total);

    return 0;
}

long sum(int *start, int *end)
{

    long total = 0;

    while (start < end)
    {
        total += *start;
        start++;
    }

    return total;
}