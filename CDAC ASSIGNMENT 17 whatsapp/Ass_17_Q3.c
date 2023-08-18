/*
3. WAP to read character from user and check that character is number after that display cube of that number.
*/
#include<stdio.h>

void main(){

    char c,t;
    printf("Enter a char : \n");
    scanf("%c",&c);

    if(c>='0' && c<='9'){
        t=c-'0';
        printf("%d",t*t*t);
    }



}
