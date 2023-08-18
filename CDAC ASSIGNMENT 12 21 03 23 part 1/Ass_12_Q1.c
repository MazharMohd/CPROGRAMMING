//wap to read a 2D array to add two matrix

#include<stdio.h>
void main(){

int p[3][3];
int q[3][3];
int t[3][3];

int v,m;

printf("Enter value in 1st array : \n");
for(v=0;v<3;v++){       // for loop to take input in first array
    for(m=0;m<3;m++){
        scanf("%d",&p[v][m]);
    }
}

printf("Enter value in 2nd array : \n");
for(v=0;v<3;v++){                            // for loop to take input in 2nd 2D array
    for(m=0;m<3;m++){
        scanf("%d",&q[v][m]);
    }
}

printf("value in 1st array : \n");

for(v=0;v<3;v++){       //for loop to print elements in 1st array p[3][3]
        for(m=0;m<3;m++){
            printf("%d ",p[v][m]);
        }
        printf("\n");
}
printf("value in 2nd array : \n");

for(v=0;v<3;v++){       // for loop to print elements in 2nd array q[3][3]
    for(m=0;m<3;m++){
        printf("%d ",q[v][m]);
    }
    printf("\n");
}

for(v=0;v<3;v++){           //for loop to add the elements of p[3][3] and q[3][3] and store in t[3][3]
    for(m=0;m<3;m++){
        t[v][m] = p[v][m] + q[v][m];

    }
}

printf("\nvalue in new array : \n");

for(v=0;v<3;v++){
    for(m=0;m<3;m++){
        printf("%d ",t[v][m]);
    }
    printf("\n");
}






}
