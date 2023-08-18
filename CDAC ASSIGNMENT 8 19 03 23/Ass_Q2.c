//wap to read two no from user and display factorial of all the no b/w them
void main(){

int a,b;
int p,l,q;

printf("Enter two no to find prime no : ");
scanf("%d%d",&a,&b);


for(l=a;l<=b;l++){
q=1;
for(p=l;p>1;p--){
    q=q*p;
}
printf("factorial of %d is %d.\n",l,q);
}


}
