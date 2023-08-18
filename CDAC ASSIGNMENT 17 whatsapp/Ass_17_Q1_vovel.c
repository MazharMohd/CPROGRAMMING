/*  WAP to read character from user and check that character is vowel Or not..

*/

#include<stdio.h>
void main(){

char c ;
printf("Enter a char : \n");
scanf("%c",&c);

if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
    printf("Entered char %c is vowel",c);
}
else if(c=='A' || c=='E' || c=='i' || c=='O' || c=='U'){
    printf("Entered char %c is vowel",c);
}
else{
    printf("Enterd char %d is not vowel");
}



}
