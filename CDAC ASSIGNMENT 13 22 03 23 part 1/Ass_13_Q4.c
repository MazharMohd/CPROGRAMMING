//wap to read matrix  and display its digonals
#include<stdio.h>
void main(){

int mat1[3][3];

int row,col;

printf("Enter elements of matrix : \n");
for(row=0;row<3;row++){
    for(col=0;col<3;col++){
        scanf("%d",&mat1[row][col]);
    }
}

for(row=0;row,3;row++){
    for (col=0;col<3;col++){
        if(row==col){
            printf("%d ",mat1[row][col]);
        }
    }
}





}
