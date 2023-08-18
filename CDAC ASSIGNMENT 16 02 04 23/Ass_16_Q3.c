/*

Write a C program that calculates the HCF and LCM of two numbers.(using function)

*/

#include<stdio.h>
int lcm(int n){
    int t,q,mul=1;

        for(t=q;t<=n/2;t++){
        if(n%t==0){
            mul= mul*t;

        }
    }

    //printf("%d",mul);
    return mul;

}
void main (){

    int num1,num2, prod;
    printf("Enter a number : ");
    scanf("%d%d",&num1,&num2);

    prod=lcm(num);
    printf("%d",prod);

}
