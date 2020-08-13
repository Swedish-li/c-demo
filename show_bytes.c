#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;

    for (size_t i = 0; i < len; i++)
    {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int val)
{
    show_bytes(&val, sizeof(int));
}

void show_float(float val)
{
    show_bytes(&val, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer)x, sizeof(void *));
}

void test_show_pointer(int val)
{
    int ival = val;
    float fval = (float)val;
    int *pval = &ival;

    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int main(void)
{

    int val = 12345;
    test_show_pointer(val);
}
