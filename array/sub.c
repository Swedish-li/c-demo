#include <stdio.h>

int main(void)
{
    int row = 16;
    int col = 14;

    for (int i = 0; i <= 16; i++)
    {
        for (int j = 0; j <= 16; j++)
        {
            if (i == 0 && j == 0)
            {
                printf("      ");
            }
            else if (i == 0)
            {
                printf(" %5d", j);
            }
            else if (j == 0)
            {
                printf(" %5d", i);
            }
            else
            {
                int sub = j * i;
                if (j == col && i == row)
                {
                    printf(" (%3d)", sub);
                }
                else
                {
                    printf(" %5d", sub);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
