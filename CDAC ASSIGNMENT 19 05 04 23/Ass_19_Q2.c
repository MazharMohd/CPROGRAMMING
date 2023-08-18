/*
Write a function that searches for a character in the string and returns the number of occurrences
*/
#include<string.h>
#include<stdio.h>

void search(char *s1,char t){
    int count=0;
    while(*s1!='\0'){
        if(*s1==t){
            count++;
        }
        s1++;
    }
    printf("%d\n",count);

}

void main(){

    char str1[30];
    char ch;
    printf("Enter a string : \n");
    gets(str1);

    printf("Enter a char : ");
    ch=getchar();
    search(str1,ch);
}
