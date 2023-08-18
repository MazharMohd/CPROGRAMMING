/*
Write a function which replaces all the occurrences of a character from a string with another
character. It should take three arguments, a string and two characters.
*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
void replace (char *s1,char t1,char t2){

    while(*s1!='\0'){
        if(*s1==t1){
            *s1=t2;
           // printf("%c",*s1);
        }

        s1++;
    }
   //puts(s1);
}
void main ()
{
    char str1[30];
    char ch1 ,ch2;

    printf("Enter a string : \n");
    gets(str1);

    printf("Enter  a char : ");
    //scanf("%c",&ch1);
    ch1=getche();
    printf("\nEnter  a char : ");
    ch2=getche();

    replace(str1,ch1,ch2);
    puts(str1);
}
