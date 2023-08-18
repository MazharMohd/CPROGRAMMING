//wap to read two no from user and display all the armstrong no b/w them
void main(){

int v,b;
int t,r,sum;

printf("Enter two no to find prime no : ");
scanf("%d%d",&v,&b);
sum=0;
while(v<b){
    t=v;
    sum =0;
    while(t!=0){
       r= t%10;
        sum +=r*r*r;
        t= t/10;
    }
    if(v==sum){
        printf("%d\n",v);
    }

    v++;
}


}
