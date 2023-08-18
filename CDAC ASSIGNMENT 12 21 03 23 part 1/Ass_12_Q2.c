//wap to count even and odd no in a matrix


#include<stdio.h>

void main(){

int f[3][3];
int odd=0,even=0;
int q,t;

printf("Enter value of array : \n");
for(q=0;q<3;q++){
    for(t=0;t<3;t++){
        scanf("%d",&f[q][t]);
    }
}

for(q=0;q<3;q++){
    for(t=0;t<3;t++){
        if(f[q][t]%2==0){
                even++;
        }
        else{
            odd++;
        }

    }
}
printf("%d %d",even,odd);


}


