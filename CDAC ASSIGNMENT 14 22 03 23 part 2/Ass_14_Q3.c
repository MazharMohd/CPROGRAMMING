/* wap to create menu driven program if choice 1 call addition
                using parameter         choice 2 call subtract
                 also return to main    choice 3 call multiply
                                        choice 4 call division
                                        choice 5 call wrong no.

*/
#include<stdio.h>
int sum (int,int);
int sub (int,int);
int multiply(int,int);
int divide(int,int);

void main(){


int a,p,q,t;
printf("Enter : \n\t1 for additon \n\t2 for subtract \n\t3 for multiplication \n\t4 for divide \n");
scanf("%d",&a);

printf("Enter two no : \n");
scanf("%d%d",&p,&q);

switch(a){
case 1 :{
    t=sum(p,q);
    printf("%d",t);
    break;
}
case 2 :{
    t=sub(p,q);
    printf("%d",t);
    break;
}

case 3 :{
    t=multiply(p,q);
    printf("%d",t);
    break;
}
case 4 :{
    t=divide(p,q);
    printf("%d",t);
    break;
}
default :{
    printf("Wrong choice");

}
}
}
int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}

int sub(int a,int b){
    int c;
    c=a-b;
    return c;
}
int multiply(int a,int b){
    int c;
    c=a*b;
    return c;
}
int divide(int a,int b){
    int c;
    c=a/b;
    return c;
}
