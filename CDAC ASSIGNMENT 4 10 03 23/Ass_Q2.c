//wap to  read percent from user and display grades
#include<stdio.h>
int main (){
    int n;
    printf("Enter your percent ");
    scanf("%d", &n);

    if(n>100)
        printf("Enter correct percent ");
    else if(n>90 && n<=100)
        printf("your grade us A+");
    else if(n>80 && n<=90)
        printf("your grade us A");
    else if(n>70 && n<=80)
        printf("your grade us B+");
    else if (n>60 && n<=70)
        printf("your grade us B");
    else if (n>50 && n<=60)
        printf("your grade us C");
    else if (n>40 && n<=50)
        printf("your grade us D");
    else
        printf("your are fail");
return 0;
}
