//wap to read two no from user and display all the prime no b/w this two no.
// all extra printf are used to trace the loop

void main(){

int a,b,p,q,l;
printf("Enter two no to find prime no : ");
scanf("%d%d",&a,&b);



for(q=a;q<=b;q++){

p=0;
//printf("for 1");

    for(l=2;l<=q/2;l++){

//    printf("for 2");
        if(q%l==0){
            p=1;
  //          printf("if 1");
            break;
        }
    }
    if(p==0){
    //        printf("if 2");
        printf("%d\n",q);
    }

}

}
