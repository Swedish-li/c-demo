#include <stdio.h>
#include <string.h>

void fit(char *s, unsigned int n);

int main()
{
    char msg[] = "Things should be as simple as possible,"
                 " but not simpler";
    puts(msg);
    fit(msg, 38);
    puts(msg);

    puts("Let's look at some more of the string.");

    puts(msg + 39);

    return 0;
}

void fit(char *s, unsigned int n)
{
    if (strlen(s) > n)
    {
        s[n] = '\0';
    }
}
