#include <stdio.h>
#include "msg.h"

void test_show_bytes(int val);

int main(void)
{
    printf(HELLO);

    show();

    test_show_bytes(289);
}

void test_show_bytes(int val)
{
    int ival = val;
    float fval = (float)ival;
    int *pval = &ival;

    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}