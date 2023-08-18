/*
WAP to read string from user and count how many words are there in that string..

*/

#include<stdio.h>
#include<string.h>

void mystrcount(char *s){

    int count;
    count=0;
    while(*s!='\0'){
        if(*s>='a' && *s<='z'){
            count++;
        }
        s++;
    }
    printf("%d excluding space.",count);

}

void main () {

    char str[20];

    gets(str);

    mystrcount(str);

}



