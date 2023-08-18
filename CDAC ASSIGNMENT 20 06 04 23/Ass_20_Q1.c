/*
wap to pass every element of structure to a function and display there
*/


#include<stdio.h>

struct employ{

    int emoplyId;
    char name[25];
    float salary;

};

void show(int eId,char *eName,float eSal){

    printf("Employ detils : \n");
    printf("Id : %d \nName : ",eId);
    puts(eName);
    printf("Salary %0.2f",eSal);
}

void main (){

    struct employ e1;

    printf("Enter employ name : \n");
    gets(e1.name);


    printf("Enter employ id : \n");
    scanf("%d",&e1.emoplyId);
/*
    printf("Enter employ name : \n");
    gets(e1.name);
*/
    printf("Enter employ salary : \n");
    scanf("%f",&e1.salary);

    show(e1.emoplyId,e1.name,e1.salary);

/*
    printf("%d \n",e1.emoplyId);
    puts(e1.name);
    printf("%0.2f",e1.salary);
*/

}
