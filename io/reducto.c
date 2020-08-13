#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 40

int main(int argc, char const *argv[])
{
    FILE *in, *out;
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s filenam\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    return 0;
}
