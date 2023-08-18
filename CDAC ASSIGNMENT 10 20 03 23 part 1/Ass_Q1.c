//wap to read elements in 1 D array and display multiplication
#include<stdio.h>
void main(){

int a[5];       //decleration of a intiger type array whose can hold 5 value
int h,total=1;

printf("Enter elements : ");
                        //for loop to take input from user and assign that value in array a[5] at {0,1,2,3,4} index
for(h=0;h<5;h++){

    scanf("%d",&a[h]);
}
                        //for loop to display all value in array a[5]
for(h=0;h<5;h++){
    printf("%d  ",a[h]);
}
                        // for loop to multiply all the values stored in array a[5]
for(h=0;h<5;h++){

        total = total*a[h];
}
printf("\nmultiplication of all the elements of array is : %d",total);

}
