#include <stdio.h>
#include <limits.h>

/* integer to binary string */
char *itobs(int, char *);

void show_bstr(char *);

int main(void)
{
    char bin_str[CHAR_BIT * sizeof(int) + 1];

    int number;

    puts("Enter integers and see them in binary.");
    puts("Non-numeric input terminates program.");

    while (scanf("%d", &number) == 1)
    {
        itobs(number, bin_str);
        printf("%d is number.\n", number);
        show_bstr(bin_str);
        putchar('\n');
    }

    puts("Bye!");

    return 0;
}

char *itobs(int num, char *ps)
{
    int i;

    const static int size = CHAR_BIT * sizeof(int);

    for (i = size - 1; i >= 0; i--, num >>= 1)
    {
        ps[i] = (01 & num) + '0';
    }

    return ps;
}

void show_bstr(char *str)
{

    int i = 0;

    while (str[i])
    {
        putchar(str[i]);
        if (++i % 4 == 0 && str[i])
        {
            putchar(' ');
        }
    }
}