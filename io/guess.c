#include <stdio.h>

int main(void)
{
    int guess = 1;
    char response;

    puts("Pick an Integer from 1 to 100, I will try to guess it.");

    puts("Respond with a y if my guess is right and with\nan n if it is wrong. ");

    printf("Uh... is your number %d?\n", guess);

    while ((response = getchar()) != 'y')
    {
        if (response == 'n')
        {
            // guess++;
            printf("Well, then, is it %d\n", ++guess);
        }
        else
        {
            puts("Sorry, I understand only y or n");
        }

        while (getchar() != '\n')
            continue;
    }

    puts("I knew I could do it!");

    return 0;
}