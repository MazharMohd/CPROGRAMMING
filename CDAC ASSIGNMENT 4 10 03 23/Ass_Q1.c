//WAP TO FIND GRATEST OF SEVE NO. USING ELSE-IF LADDER
#include<stdio.h>
int main(){

int a,b,c,d,e,f,g;
printf("Enter seven no..");
scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);

if(a>b && a>c && a>d && a>e && a>f && a>g)
    printf("%d is grater ",a);

else if(b>a && b>c && b>d && b>e && b>f && b>g)
    printf("%d is grater ",b);

else if(c>a && c>b && c>d && c>e && c>f && c>g)
    printf("%d is grater ",c);

else if (d>a && d>b && d>c && d>e && d>f && d>g)
    printf("%d is grater ",d);
else if  (e>a && e>b && e>c && e>d && e>f && e>g)
    printf("%d is grater ",e);
else if(f>a && f>b && f>c && f>d && f>e && f>g)
    printf("d is grater ",f);
else if (g>a && g>b && g>c && g>d && g>e && g>f)
    printf("%d is grater ",g);
return 0;
}
