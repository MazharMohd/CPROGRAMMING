//wap to check two matrix are identical or not


void main(){

int h[3][3];
int d[3][3];
int m,b;
int count=0;

printf("Enter value in 1st matrix\n");

for(m=0;m<3;m++){
    for(b=0;b<3;b++){
        scanf("%d",&h[m][b]);
    }
}

printf("enter value in 2nd matrix\n");

for(m=0;m<3;m++){
    for(b=0;b<3;b++){
        scanf("%d",&d[3][3]);
    }
}

for(m=0;m<3;m++){
    for(b=0;b<3;b++){
        if(h[m][b] != d[m][b]){
          count++;
          break;
        }
    }
}
if(count>0){
    printf("Enterd matrix are not identical");
}else{
printf("Enterd matrix are identical ");
}

}
