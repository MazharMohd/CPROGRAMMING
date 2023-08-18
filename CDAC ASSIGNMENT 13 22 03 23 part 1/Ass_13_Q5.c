//wap to read a matrix from user and read a no form user and count how many time that no occured in the matrix


void main(){

int mat[3][3];

int row,col,no;
int count=0;

printf("Enter a matrix : \n");

for(row=0;row<3;row++){
    for(col=0;col<3;col++){
    scanf("%d",&mat[row][col]);
}
}
printf("Enter a no : \n");
scanf("%d",&no);

for(row=0;row<3;row++){
    for(col=0;col<3;col++){
        if (mat[row][col]==no){
            count++;
        }
    }
}

printf("\n%d",count);
}
