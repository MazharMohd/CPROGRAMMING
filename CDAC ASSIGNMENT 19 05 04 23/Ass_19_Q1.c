/*
Write a program to accept a line of text and display the number of consonants and spaces in that
line of text.
*/
#include<string.h>
#include<stdio.h>
void counter(char *s1){
    int t,q, count=0;
    q=strlen(s1);
    for(t=0;t<=q;t++){
        if(s1[t]=='a' || s1[t]=='e' || s1[t]=='i' || s1[t]=='u'){
            continue;
        }
        else{
            count++;
        }
    }
    printf("%d",count-1);
}
void main (){

    char st1[30];
    printf("Enter a string : \n");
    gets(st1);
    puts(st1);



}
