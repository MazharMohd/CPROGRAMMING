/*
WAP to read a string and character from user and check how many times that character is comming in that string...


*/
#include<stdio.h>
void main(){

    int t,count;
    char str[25];
    char ch;

    printf("Enter a string :\n");
    gets(str);
    printf("Enter a char : \n");
    scanf("%c",&ch);

    count=0;
    for(t=0;str[t]!='\0';t++){
        if(str[t]==ch){
        count++;
    }
    else{
        continue;
    }
}
}
