//WAP read no. from user and check no. is positive or negative.
#include <stdio.h>
int main(){

int a;
printf("Enter value of a : ");
scanf("%d",&a);

if(a==0){
    printf("Zero is not Positive niether Negative");
}
else if(a>0){
    printf("positive");

}
else{
    printf("Negative");
}
return 0;
}
