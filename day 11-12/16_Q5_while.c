/*

Q5: WAP TO READ TWO NUMBERS AND PRINT TABLE OF THE NUMBERS IN BETWEEN IN FOLLOWING WAY?

1*1  1*2  1*3  1*4  1*5
2*1  2*2  2*3  2*4  2*5
3*1  3*2  3*3  3*4  3*5
4*1  4*2  4*3  4*4  4*5
5*1  5*2  5*3  5*4  5*5
6*1  6*2  6*3  6*4  6*5
7*1  7*2  7*3  7*4  7*5
8*1  8*2  8*3  8*4  8*5
9*1  9*2  9*3  9*4  9*5
10*1 10*2 10*3 10*4 10*5

*/
#include<stdio.h>
void main(){

    int s,t,r;
    printf("Enter a no : \n");
    scanf("%d",&s);

    t=1;
    while(t<=s){

        r=1;
        while(r<=5){
            printf("%d*%d ",t,r);
            r++;
        }
        printf("\n");
        t++;
    }


}
