#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40];

    // char str[30];

    printf("Hi, What's your first name ?\n");
    scanf("%39s", name);
    // scanf("%s", name);
    printf("%s, What's your weight in pounds?\n", name);

    // printf("%s", str);

    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);

    volume = weight / DENSITY;

    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it\n", size);
    return 0;
}