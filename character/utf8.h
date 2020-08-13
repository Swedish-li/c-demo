
// #include <stdio.h>
#include <wchar.h>

typedef struct
{
    int cmask;
    int cval;
    int shift;
    long lmask;
    long lval;
} Tab;

static Tab tab[] = {
    0x80, 0x00, 0 * 6, 0x7F, 0,     // 1 byte sequence
    0xE0, 0xC0, 1 * 6, 0x7FF, 0x80, // 2 byte sequence
    0xF0, 0xE0, 2 * 6, 0xFFFF, 0x800, // 3 byte sequence
    0xF8, 0xF0, 3 * 6, 0x1FFFFF, 0x10000, // 4 byte sequence
    0xFC, 0xF8, 4 * 6, 0x3FFFFFF, 0x200000, // 5 byte sequence
    0xFE, 0xFC, 5 * 6, 0x7FFFFFFF, 0x4000000, // 6 byte sequence
    0
};


/**
 * 将UTF-8字节序列转换为Unicode
 * 
 * @param p 指向一个 wchar_t 变量
 * @param s 指向一个 UTF-8 的字节序列
 * @param n UTF-8字节序列长度
 * 
 * @return 
 * */
int mbtowc(wchar_t *p, char *s, size_t n);

/** 
 * 把Unicode 转换成 UTF-8字节序列
*/
int wctomb(char *s, wchar_t wc);