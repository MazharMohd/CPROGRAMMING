#include<stdio.h>
void main(){


float unit;
float price;
printf("Enter your unit : ");
scanf("%f",&unit);

if(unit<=50){
    price= unit*4.20;
    printf("%0.2f",price);
}
else if(unit>50 && unit<=150){
    price= (50*4.20)+(unit-50)*5.23;
    printf("%0.2f",price);
}
else if (unit>150 && unit<=300){
    price=(50*4.20)+(100*5.23)+(unit-150)*6.61;
    printf("%0.2f",price);
}
else if (unit>300){
    price=(50*4.20)+(100*5.23)+(150*6.61)+(unit-300)*6.80;
    printf("%0.2af",price);
}


}
