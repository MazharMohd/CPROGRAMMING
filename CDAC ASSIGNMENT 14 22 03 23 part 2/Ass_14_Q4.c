/*wap to menu driven program here we have to read no and choice from user
                if choice 1 no is perfect
                   choice 2 given no is palendrom
                   choice 3 check given no is amstrong
                   choice 4 wrong
*/
#include<stdio.h>

int perfectNo(int);
int palendrom(int);
int amstrong(int;);
void main(){
int a,t;
printf("Enter a no\n");
scanf("%d",&t);
printf("Enter a no to perform operation : \n\t1 to check perfect no \n\t2 check palendrom no  \n\t3 check amstrong no  \n");
scanf("%d",&a);

switch(a){

case 1 :{
    perfectNo(t);
    break;
}
case 2 :
    {
        palendrom(t);
        break;
    }
case 3 :
    {
        amstrong(t);
        break;
    }
default : {
    printf("Wrong choice");
    break;

}


}
}
int perfectNo(int z){
    int m,k,sum;
    k=z,sum=0;
    for(m=1;m<k;m++){
        if(k%m==0){
            sum =sum+m;
            //printf("%d\n",sum);
        }
    }
    if(sum==z){
        printf("%d is perfect no. ",z);
    }
    else{
        printf("%d is not perfect no. ",z);
    }
}
int palendrom(int t){
    int m,k,z;
    k=t;
    z=0;

    while(k>0){
        z = z*10 + k%10;
        k=k/10;
    }
    if(t==z){
    printf("%d is a palendrom no \n",t);
    }
    else
        printf("%d is not a palendrom no ",t);

    }
int amstrong(int t){
int z;
   int m,k,u=0;
   z=t;
   for(m=0;t>0;m++){
       k = t%10;
       //printf("%d\n",k);
       u = u+k*k*k;
       t=t/10;
       //printf("%d\n",u);
   }
   if(z==u){
    printf("%d is a amstrong no ",u);
   }
   else
    printf("%d is not a amstrong no ",u);

}
