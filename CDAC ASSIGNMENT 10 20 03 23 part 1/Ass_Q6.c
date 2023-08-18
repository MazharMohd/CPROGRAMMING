//wap to read elements in 1 D array and display even values only
#include<stdio.h>
void main(){

int l[5];
int w;
int count=0;

printf("Enter elements in array : \n");
for(w=0;w<5;w++){
    scanf("%d",&l[w]);
}

printf("Value of array : \n");
for(w=0;w<5;w++){
    printf("%d ",l[w]);
}

for(w=0;w<5;w++){
    if(l[w]%2!=1){
       count++;
    }

}

printf("\n%d ",count);

}
