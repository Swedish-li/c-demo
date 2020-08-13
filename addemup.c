#include <stdio.h>

int main(void)
{
    // 变量声明不是表达式
    int count, sum;

    count = 0; // 表达式语句
    sum = 0;   // 表达式语句

    while (count++ < 20)
    {
        printf("count = %d\t", count);
        sum = count + sum;
    }

    printf("\n");

    printf("sum = %d\n", sum);

    return 0;
}