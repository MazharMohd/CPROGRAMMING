/*wap to read a matrix and display there multiplication

row of  ist matrix * colom of 2nd matrix

*/
#include<stdio.h>
void main(){

int d[3][3];
int y[3][3];
int m[3][3];
int h,g,t;

printf("Enter 1st matrix \n");
for(h=0;h<3;h++){
    for(g=0;g<3;g++){
        scanf("%d",&d[h][g]);
    }
}

printf("Enter value of 2nd matrix \n");
for(h=0;h<3;h++){
    for(g=0;g<3;g++){
        scanf("%d",&y[h][g]);
    }
}

printf("Multiplication of matrix\n");
for(h=0;h<3;h++){
    for(g=0;g<3;g++){
         m[h][g]= 0;
         for(t=0;t<3;t++){
        m[h][g] += d[h][t] * y[t][g];
        }
    }
}

for(h=0;h<3;h++){
    for(g=0;g<3;g++){
        printf("%d ",m[h][g]);
    }
    printf("\n");
}

}
