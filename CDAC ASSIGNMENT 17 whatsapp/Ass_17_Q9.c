/*
9. WAP to read string from user and convert all lower case characters into upper case and all
uper case characters into lower case...


*/

#include<stdio.h>
#include<string.h>

void mystrupr(char *s){
    while(*s!='\0'){
        if(*s>='a' && *s<='z'){
            *s = *s - 32;
        }
        s++;
    }



}

void main(){

    char str[20];


    gets(str);

    mystrupr(str);
    puts(str);

}
