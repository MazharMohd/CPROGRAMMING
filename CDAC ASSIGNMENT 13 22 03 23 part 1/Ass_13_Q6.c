//wap to find octa to binary using id array

// incomplet

#include<stdio.h>
void main(){
int a,rem,t,octa,count;
int arr[20];

a=260;
octa =0;
for(t=0;a>0;t++){

    octa= octa*10+ a%8;
    a=a/8;

rem=0;

}
for(t=0;octa>0;t++){

    rem=rem*10 + octa%2;
   octa = octa/2;

    printf("%d \n",rem);
}

for(t=0;a>0;t++){
    printf("\n%d ",arr[t]);
}
}


