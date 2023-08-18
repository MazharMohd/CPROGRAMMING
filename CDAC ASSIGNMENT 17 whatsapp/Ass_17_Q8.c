/*
WAP to read mobile number as a string and print count of every digit...
Like 8821014212
8- 2 times
2 - 3 times
0- 1 time
*/
#include<stdio.h>
#include<string.h>
/*
void counter(char *n){
    int t,count,add;
    int i,j;
    i=0;
    while(n[i]!='\0'){
        {
        count=0;
            j=0
            while(n[j]!='\0'){
                if(n[i]==n[j]){
                    count++;
                }
                j++;
            }
            printf("%c - %d ",n[i],count);

        }
       i++;
    }


}
*/
void main (){

    int i,j;
    char num[10];
    int count;

    printf("Enter a mobile no : ");
    gets(num);

    //counter(num);

    for(i=0;num[i]<=strlen(num);i++){
            count=1;
            if(num[i]=='*')
                continue;

        for(j=i+1;num[j]<=strlen(num);j++){
            if(num[i]==num[j]){
                count++;
                num[i]='*';

            }

        }
        printf("%c - %d \n",num[i],count);

    }



}
