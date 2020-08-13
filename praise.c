#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being."

int main(void)
{

    char input[40];

    printf("What's your name?");
    scanf("%s", input);

    printf("Hello, %s. %s\n", input, PRAISE);

    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(input), strlen(PRAISE));

    printf("The phrase of praise has %zd letters ", strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);

    return 0;
}