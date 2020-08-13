#include <stdio.h>

int main(void)
{

    float weight, value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");

    scanf("%f", &weight);

    value = weight * 14.5833 * 1700.0;

    printf("Your weight in platinum is worth $%.2f.\n",value);
    printf("You are easily worth that! If platinum price drop.\n");
    printf("eat more to maintain you value.\n");

    return 0;
}
