//wap to count the prime no in 1D array
#include<stdio.h>
void main(){
 int a,i,m;
 int array[5];
    int flag,count;
    printf("Enter elements in array\n");

    for(m=0;m<5;m++){
            scanf("%d",&array[m]);
    }
        count=0;
    for(m=0;m<5;m++){
            a=array[m];
            flag=0;
        for(i=2;i<a;i++){
        if(a%i==0){
            flag=1;
        }
    }
    if (flag!=1){
        count++;
        printf("%d ",count);
    }
    }
    printf("\n%d no  are prime in array ",count);



}
