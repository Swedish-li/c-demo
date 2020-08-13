#include "utf8.h"

int mbtowc(wchar_t *p, char *s, size_t n)
{
    long l;
    int c0, c, nc;

    Tab *t;

    if (s == 0)
    {
        return 0;
    }

    nc = 0;
    if (n <= nc)
    {
        return -1;
    }

    c0 = *s & 0xff;
    l = c0;

    for (t = tab; t->cmask; t++)
    {
        nc++;

        if ((c0 & t->cmask) == t->cval)
        {
            l &= t->lmask;
            if (l < t->lval)
            {
                return -1;
            }

            *p = l;
            return nc;
        }

        if (n <= nc)
        {
            return -1;
        }

        s++;

        c = (*s ^ 0x80) & 0xFF;

        if (c & 0xC0)
        {
            return -1;
        }

        l = (l << 6) | c;
    }

    return -1;
}

int wctomb(char *s, wchar_t wc)
{
    long l;
    int c, nc;
    Tab *t;

    if (s == 0)
    {
        return 0;
    }

    l = wc;
    nc = 0;

    for (t = tab; t->cmask; t++)
    {
        nc++;
        if (l <= t->lmask)
        {
            c = t->shift;
            *s = t->cval | (l >> c);

            while (c > 0)
            {
                c -= 6;
                s++;

                *s = 0x80 | ((l >> c) & 0x3F);
            }

            return nc;
        }
    }
    return -1;
}