//wap to find decimal no into binary no.
#include<stdio.h>
void main (){
    int a,p,d;
    int t,num;
    int w[10];
    int m[3];

    for(p=0;p<3;p++){
        scanf("%d",&m[p]);
    }



    for(p=0;p<3;p++)
    {
        a= m[p];
        d=0;
        num =0;
    for(t=0;a;t++){
        num = num*10 + a%2;
        a = a/2;
        d++;
    }
       //printf("%d  %d ",d,num);

    for(t=0;num;t++){
        w[t]=num%10;
        num = num/10;
    }

    for(t=0;t<d;t++){
        printf("%d ",w[t]);
    }
        printf("\n\n  ");
    }
}
