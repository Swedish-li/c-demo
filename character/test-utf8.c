#include "utf8.h"
#include <stdio.h>

int main()
{
    char s[4] = {0xE5, 0x90, 0x95, 0x00};
    wchar_t wc;

    mbtowc(&wc, s,4);
    printf("%0x\n", wc);
    
    return 0;
}
