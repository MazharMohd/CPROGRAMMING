/*
2.WAP to read character from user and check that character is consonant Or not.
*/
#include<stdio.h>

void main(){

    char c;
    printf("Enter a char : \n");
    scanf("%c",&c);

    if(c=='a' || c=='e' || c=='i' || c=='i' || c=='u'){
        printf("Entered char %c is not a constant ",c);
    }
    else if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("Entered char %c is not  a constant ",c);
    }
    else {
        printf("%c is constant ",c);
    }

}
