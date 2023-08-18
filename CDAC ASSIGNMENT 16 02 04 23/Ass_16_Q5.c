/*
Write a C program that reads a positive integer n and then prints the following pattern
 *********
 _********
 __*******
 ___******
 ____*****
 _____****
 ______***
 _______**
 ________*
 where n is the number of lines
*/


#include <stdio.h>

int main()
{
    int n,i,j,k;
    //scanf("%d",n);
    n=9;

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=n-i;k>0;k--){
            printf("*");
        }
        printf("\n");
    }
    printf("Hello World");

    return 0;
}
