/* wap to create menu driven program if choice 1 call addiion
                using parameter         choice 2 call subtract
                                        choice 3 call multiply
                                        choice 4 call division
                                        choice 5 call wrong no.

*/

#include<stdio.h>
void sum(int,int);
void sub(int,int);
void multiply(int,int);
void divide(int,int);



int main(){

int a,p,q;
printf("Enter : \n\t1 for additon \n\t2 for subtract \n\t3 for multiplication \n\t4 for divide \n");
scanf("%d",&a);

printf("Enter two no : \n");
scanf("%d%d",&p,&q);


switch(a){
case 1:
    {
    sum(p,q);
    break;
    }
case 2 :
    {
        sub(p,q);
        break;
    }
case 3 :
    {
        multiply(p,q);
        break;
    }
case 4:
    {
        divide(p,q);
        break;
    }
default :
    {
        printf("Wrong choice. \n");
    }
    }

}
void sum(int a,int b){

int c;
c=a+b;

printf("sum of two no is %d",c);

 }
void sub(int a,int b){
    int c;
    c=a-b;

    printf("sub of two no is %d ",c);
}

void multiply(int a,int b){

int c;
c=a*b;

printf("multiply of two no is %d ",c);

}

void divide(int a,int b){

int c;
c=a/b;

printf("divide of two no is %d ",c);

}





