//wap to convert fahrenheit to celsius?
//hint (32°F − 32) × 5/9 = 0°C
#include<stdio.h>
int main(){
float f,c;
printf("Enter temp in f : ");
scanf("%d",&f);

c = (f-32)*5/9;
printf("change %0.2f f to %0.2f c ",f,c);

return 0;
}
