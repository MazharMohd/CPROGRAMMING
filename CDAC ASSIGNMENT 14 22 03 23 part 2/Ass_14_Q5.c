/*wap to menu driven program here we have to read no and choice from user
                if choice 1 no is perfect
                   choice 2 given no is palaendrom
                   choice 3 check given no is amstrong
                   choice 4 wrong
*/
#include<stdio.h>
int perfectNo(int);
int palaendrom(int);
int amstrong (int);
void main(){

int a,t,j;
printf("Enter a no\n");
scanf("%d",&t);
printf("Enter a no to perform operation : \n\t1 to check perfect no \n\t2 check palaendrom no  \n\t3 check amstrong no  \n");
scanf("%d",&a);

switch(a){

   case 1 :{
    j=perfectNo(t);
    if(j==t){
    printf("%d is a perfect no ",j);
    break;
    }
    else{
        printf("%d is not a perfect no ",j);
        break;
    }
       }
   case 2 :
    {
        j=palaendrom(t);
        if(j==t){
        printf("%d is a palaendrom no ",j);
        break;
        }
        else{
            printf("%d is not a palaendrom no ",j);
            break;
        }
    }
   case 3 :
    {
        j=amstrong(t);
        if(j==t){
        printf("%d is a amstrong no ",j);
        break;
        }
        else{
            printf("%d is not a amsrong no ",j);
        }
    }
   default :{
       printf("Wrong Choice ");
       break;
   }

}
}
int perfectNo(int t){
int m,k,sum;
    k=t,sum=0;
    for(m=1;m<k;m++){
        if(k%m==0){
            sum =sum+m;
            //printf("%d\n",sum);
        }
    }
return sum;
}
int palaendrom(int t){
    int k,h,m;
    k=t;
    h=0;

    for(m=0;k>0;m++){
        h=h*10 + k%10;
        k=k/10;
        }
    return h;
}
int amstrong(int t){

int k,h,m,b;
k=t;
b=0;
for(m=0;k>0;m++){
    h = k%10;
    b=b+h*h*h;
    k=k/10;
    //printf("%d\n",b);
}

return b;

}

