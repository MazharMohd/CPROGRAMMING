/*
4. WAP to read string from user and count how many vowels are available in that string...
*/

#include<stdio.h>
#include<string.h>
void main (){
    int t,count=0;
    char s[20];
    printf("Enter a string : ");
    gets(s);
    printf("%s",s);

    for(t=0;t<=20;t++){
        if(s[t]=='a' || s[t]=='e' || s[t]=='i' || s[t]=='o' || s[t]=='u'){
            count++;
        }
        else if(s[t]=='A' || s[t]=='E' ||s[t]=='I' ||s[t]=='O' || s[t]=='U'){
            count++;
        }
        else {
            continue;
        }
    }

    printf("\n%d",count);



}
