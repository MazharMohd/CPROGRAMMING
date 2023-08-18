/*
wap to read elements in array of a structure in array of structure and display it..
*/
#include<stdio.h>
#include<string.h>

struct helper{

    int id;
    char name[20];
    float salary;
    float hrs;

};
 void display(struct helper *h){
    int t;
    for(t=0;t<10;t++)
    {
     scanf("%d",h[t].id);
     puts(h[t].name);
     scanf("%0.2f",h[t].salary);
     scanf("%0.2f",h[t].hrs);

    }

 }


void main(){

    int t,n;
    struct helper h[10];
/*
    printf("Enter no of helpers : \n");
    scanf("%d",&n);
*/
    for(t=0;t<n;t++){
        printf("Name : \n");
        gets(h[t].name);
        printf("Id : \n");
        scanf("%d",&h[t].id);
        printf("salary : \n");
        scanf("%f",&h[t].salary);
        printf("hrs : \n");
        scanf("%f",&h[t].hrs);
    }

    display(h);

}
