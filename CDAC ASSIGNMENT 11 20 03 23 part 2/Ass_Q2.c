//wap to read element in 2D array and find sum of all the elements in 2D array
#include<stdio.h>
int main(){

int h[3][3];
int v,c;
int sum=0;


printf("Enter element of array : \n");
for(v=0;v<3;v++){

    for(c=0;c<3;c++){

        scanf("%d",&h[v][c]);
    }
}

for(v=0;v<3;v++){
    for(c=0;c<3;c++){
        printf("%d ",h[v][c]);
    }
    printf("\n");
}


for(v=0;v<3;v++){
    for(c=0;c<3;c++){
        sum = sum + h[v][c];
    }
}
printf("%d",sum);
}
