/*wap to take input two number from user and a choice
    If  user choice = 1 then print all no in between in ascending order
    if  user choice = 2 then print all no in between in descending order
    if  user choice = 3 then print all no in interval of 2
    if  user choice = 4 then print all no in interval of 3
    using while loop, for loop and do while
    */

    #include<stdio.h>

    int ascending(int,int);
    void main(){

    int no1,no2,choice;

    printf("Enter a two no : \n");
    scanf("%d%d",&no1,&no2);

    printf("Enter \n\t1 for print all no in between in ascending order\n\t2 for print all no in between in descending order\n ");
    printf("\t3 for print all no in interval of 2\n\t4 for print all no in intervel of 3 \n");
    scanf("%d",&choice);


    switch(choice){

case 1 :
    {
        ascending(no1,no2);
        break;
    }
default :
    {
        printf("Wrong choice");
        break;
    }
    }

    }
    int ascending(int x, int y){
        int t,m;

        if(x<y){
            x=x+y;
            y=x-y;
            x = x-y;
            printf("%d  %d\n",x,y);
        }
        for(t=x;t<y;t++){

            printf("\t%d\n",t);
        }
        return 0;
    }
