#include <stdio.h>

int main(void)
{

    int ref[] = {8, 4, 0, 2};
    int *ptr;

    int idx;

    for (idx = 0, ptr = ref; idx < 4; idx++, ptr++)
    {
        printf("%d %d\n", ref[idx], *ptr);
    }

    return 0;
}