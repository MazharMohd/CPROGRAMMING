//wap to concert lower case to upper class
#include<stdio.h>
void myupr(char *s1){

    while(*s1!='\0'){
        *s1=*s1-32;
        s1++;
    }
}
void main (){

    char str1[20];

    printf("Enter a string : \n");
    gets(str1);
    puts(str1);

    myupr(str1);
    puts(str1);




}
