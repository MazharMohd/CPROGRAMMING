// wap to check the string is pelendrom no or not
#include<string.h>
#include<stdio.h>

int pelendrom(char *s1){

    int t,q,tag=0;
    int count=0;
    while(*s1!='\0'){
        count++;
        s1++;
    }
    q=count;

   // q=strlen(s1);

    for(t=0;t<=q/2+1;t++){
            q--;
            if(s1[t]==s1[q]){
                tag=1;
            }
            else{
                tag=0;
            }
    }
    return tag;
}

void main (){

    int t=0;
    char str1[20];

    printf("Enter a string : ");
    gets(str1);

    t=pelendrom(str1);

    if (t==1){
        printf("Entered string is a palendrom : ");
    }
    else{
        printf("Entered string is a not palendrom : ");

    }
}
