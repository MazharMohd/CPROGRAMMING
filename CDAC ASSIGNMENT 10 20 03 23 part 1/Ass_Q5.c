//wap to read elements in 1 D array and display square of every element in a array
#include<stdio.h>
void main(){

int r[5];
int g;

for (g=0;g<5;g++){

    scanf("%d",&r[g]);

}
printf("Array before square \n");
for(g=0;g<5;g++){
    printf("%d ",r[g]);
}

for(g=0;g<5;g++){               //for loop to square the value of a array
        r[g]=r[g]*r[g];

}

printf("\nArray After square \n");
for(g=0;g<5;g++){
    printf("%d ",r[g]);
}



}
