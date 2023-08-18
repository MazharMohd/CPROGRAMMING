// wap to check how many prime no are availeble in 2d array

#include <stdio.h>

void main()
{

    int arr[3][3];
    int row, col;
    int a, count = 0;
    int b, chokidar;

    printf("Enter value of mat1");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {

            a = arr[row][col];
            chokidar = 1;

                for (b = 2; b < a; b++)
                {
                    if (a % b == 0)
                    {
                        chokidar = 0;
                    }
                }
                if (chokidar == 0)
                {
                    count++;
                }

        }
    }

    printf("total prime no in array %d\n", count);
}
