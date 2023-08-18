
/*
wap to pass complete 2D array to a function and display square of every elements of that
2D array
*/

#include<stdio.h>
void square(int crr[3][3]);
void main () {
    int arr[3][3];
    int t,k;

printf("Enter value in array :\n");

    for(t=0;t<3;t++){
        for(k=0;k<3;k++){
            scanf("%d",&arr[t][k]);
        }

    square(arr[3][3]);
}
}
void square(int crr[3][3]){
    int t,k;
    int sq;

    for(t=0;t<3;t++){
        for(k=0;k<3;k++){

            sq = crr[t][k] * crr[t][k];
            printf( "%d ",sq);

        }
        printf("\n");
    }
}
