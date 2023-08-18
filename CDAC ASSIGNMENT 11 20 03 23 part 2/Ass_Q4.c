//wap to read two 1 D array and find there sum in 1D array

#include<stdio.h>
void main(){

int g[5];
int r[5];
int v[5];

int p;
printf("Enter elements of 1st array\n");
for(p=0;p<5;p++){
    scanf("%d",&g[p]);
}

printf("Enter elements of 2nd array\n");
for(p=0;p<5;p++){
    scanf("%d",&r[p]);
}

printf("\n elements in array 1 ");
for(p=0;p<5;p++){
    printf("%d ",g[p]);
}
printf("\n elements in array 2 ");


for(p=0;p<5;p++){
    printf("%d ",r[p]);
}

printf("\n ");


for(p=0;p<5;p++){

    v[p] = r[p] + g[p];

}
printf("\n sum of elements of array ");
for(p=0;p<5;p++){
    printf("%d ",v[p]);
}

}
