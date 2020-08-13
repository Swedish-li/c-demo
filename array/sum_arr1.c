#include <stdio.h>
#define SIZE 10

int sum(int arr[], int size);

int main(void)
{
    int marables[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    long answer = sum(marables, SIZE);

    printf("The total number of marables is %ld.\n", answer);
    printf("The size of marables is %zd bytes\n", sizeof marables);
    return 0;
}

int sum(int arr[], int size)
{

    long total = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        total += arr[i];
    }
    // warning: ‘sizeof’ on array function parameter ‘arr’ will return size of ‘int *’ [-Wsizeof-array-argument]
    printf("The size of arr is %zd bytes\n", sizeof arr);

    return total;
}