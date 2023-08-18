//wap to read elements in 1 D array and sum of square of all the elements

void main(){

int z[5];
int t,sum=0;

printf("Enter elements in array : \n" );
for(t=0;t<5;t++){

    scanf("%d",&z[t]);
}

for(t=0;t<5;t++){           // for loop to add square of all the element in the array
    sum = sum + z[t]*z[t];
}
printf("%d",sum);




}
