//wap to check the given year is leap year or not
void main(){

int y,m;
printf("Enter a year ");
scanf("%d",&y);

if(y%4==0){
    if(y%100==00){
            if(y%400==0){
                printf("leap yera");
            }
            else{
                printf("Not leap yera");
            }

    }else{
        printf("Not leap yera");

    }
}
else{
    printf("Not leap yera");
}


}
