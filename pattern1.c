#include <stdio.h>

int main()
{
    int l = 1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }

        for (int k = 0; k < l; k++)
        {
            printf("*");
        }
        l += 2;
        printf("\n");
    }

    l -= 2;
    
    for (int i = 1; i <= 4; i++)
    {
        l -= 2;
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < l; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}