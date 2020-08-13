#include <stdio.h>

int main(void)
{
    int age;
    float assets;
    char pets[30];

    printf("Enter your age,assets and your favorite pet.\n");

    scanf("%d %f", &age, &assets);

    scanf("%s", pets);

    printf("%d $%.2f %s\n", age, assets, pets);

    return 0;
}