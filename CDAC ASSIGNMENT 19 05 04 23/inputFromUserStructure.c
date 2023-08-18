//wap to take input from user
#include<stdio.h>
#include<string.h>
struct college{
    int roll;
    char name[30];
    float marks;
};

void main (){

    struct college s1 ;
   //struct college s2 ;

    printf("Enter student name : \n");
    gets(s1.name);

    printf("Enter roll no : \n");
    scanf("%d",&s1.roll);

    printf("Enter marks : \n");
    scanf("%f",&s1.marks);

    printf("Roll no is %d\n",s1.roll);
    printf("Student name ");
    puts(s1.name);
    printf("Marks is %0.2f\n",s1.marks);

}
