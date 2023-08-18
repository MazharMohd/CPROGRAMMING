//wap to read element in 2D array and display them

#include<stdio.h>
void main(){

int m[2][3];
int l,t;

printf("Enter elements \n");
for(l=0;l<2;l++){

    for(t=0;t<3;t++){
        scanf("%d",&m[l][t]);
    }
}


for(l=0;l<2;l++){


    for(t=0;t<3;t++){
        printf("%d ",m[l][t]);
    }
    printf("\n");
}
}
