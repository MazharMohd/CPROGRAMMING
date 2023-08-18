//wap to read elements in 1 D array and find the smallest element of that array

#include<stdio.h>
void main(){

int m[5];           //declare array of intiger data type hold 5 value ;
int q,chotu;

printf("Enter elements in array :\n");
for(q=0;q<5;q++){                   //for loop to take input from user and stor it ina arry m[5];
    scanf("%d",&m[q]);

}
for(q=0;q<5;q++){                   //for loop to display all the elements array m[5];
    printf("%d ",m[q]);
}

chotu = m[0];

for(q=1;q<5;q++){                    //for loop to find smallest(chotu) element in the given array
        if(m[q]<chotu){
            chotu = m[q];
        }
}
 printf("\nChotu %d",chotu);
}
