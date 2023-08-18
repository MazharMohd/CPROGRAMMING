// wap to calculate light bill



#include<stdio.h>
float bill(int unit,float rate){
        return(unit*rate);

}
int main(){

int unit;
float charge;

printf("Enter unit : ");
scanf("%d",&unit);


if(unit<=50){
    charge = bill(unit,3.40);
    printf("%0.2f",charge);
}
else if(unit>50 && unit<=100){
    charge = bill(unit,3.85);
    printf("%0.2f",charge);
}
else if(unit>100 && unit<=300){
    charge = bill(unit,4.80);
    printf("%0.2f",charge);
}
else if(unit>300 && unit<=500){
    charge = bill(unit,5.20);
    printf("%0.2f",charge);
}


}
