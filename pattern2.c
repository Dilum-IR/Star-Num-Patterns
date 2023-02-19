#include <stdio.h>

int main()
{

    int size;
    printf("Enter the Floyd's Triangle size: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // when i & j are odd number
            if (i % 2 != 0 && j % 2 != 0)
            {
                printf("1");
            }
            // when i is odd number but j is even number
            else if (i % 2 != 0 && j % 2 == 0)
            {
                printf("0");
            }
            // when i & j are even number
            else if (i % 2 == 0 && j % 2 == 0)
            {
                printf("1");
            }
            // when i is even number but j is odd number
            else if (i % 2 == 0 && j % 2 != 0)
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}
