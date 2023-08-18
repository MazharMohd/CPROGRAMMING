//wap to chack 2 1D array are identical or not1
#include<stdio.h>
void main(){

int arr1[5];
int arr2[5];
int t;
int flag=0;

printf("Enter 1st matrix \n");
for(t=0;t<5;t++){
    scanf("%d",&arr1[t]);
}

printf("Enter 1st matrix \n");
for(t=0;t<5;t++){
    scanf("%d",&arr2[t]);
}

for (t=0;t<3;t++){
    if(arr1[t]!=arr2[t]){
        flag=1;
    }
}
if(flag==1){
    printf("Arrays are not identical");
}
else {
    printf("arrays are identical");
}

}
