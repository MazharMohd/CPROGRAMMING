// wap to print pascal triangle take no from user
#include <stdio.h>

int main()
{
    int n, count = 1, t, i, j;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)  // no of lines
    {
        for(j = 0; j <= i; j++)     //
        {
            if(j == 0 || i == 0){
                count = 1; }
            else{
                count = count * (i - j + 1)/j;}
            printf("%d ", count);
        }
        printf("\n");
    }
    return 0;
}
