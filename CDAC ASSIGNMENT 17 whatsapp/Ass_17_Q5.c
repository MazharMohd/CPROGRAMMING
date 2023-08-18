/*
 WAP to read string from user and count number of alphabets and digits and special characters...
*/

#include<stdio.h>
void main(){
    char str[20];
    int t,count =0;
    printf("Enter a string : \n");
    gets(str);
    puts(str);

    t=0;
    while(str[t]!='\0'){
        count++;
        t++;
    }

    printf("%d",count);
}
