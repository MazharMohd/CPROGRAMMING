//wap to reverse the string

#include<string.h>
#include<stdio.h>

void mystrrev(char *s1){
    int inc,dec;
    char temp;
    dec=strlen(s1);

    for(inc=0;inc<=dec/2;inc++){
        dec--;
        temp = s1[inc];
        s1[inc] = s1[dec];
        s1[dec] = temp;
    }
    //puts(s1);

}
void main(){

    char str1[30];

    printf("Enter a  string : ");
    gets(str1);

    mystrrev(str1);
    puts(str1);

}
