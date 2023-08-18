/*
WAP to read string as a password from user and check that password is correct or not..
Rules- password must have 1 upper case and 1 lower case character 1 digit must, 1 special character must...
Maximum size must be 12 and minimum size must be 8....

*/



#include<stdio.h>
void main (){
    int t,l;
    int upper,lower,digit,special;
    char str[15];
    printf("Enter a password must have 1 upper case and 1 lower case character 1 digit must, 1 special character @ # $ & * \n");
    gets(str);
    //puts(str);

    upper=0;
    lower=0;
    digit=0;
    special=0;

    l = sizeof(str);

    if(l>=8 && l<=12){
    for(t=0;str[t]!='\0';t++){
        if(str[t]>='A' && str[t]<='Z'){
           upper=1;
        }
        else if(str[t]>='a' && str[t]<='z'){
            lower=1;
        }
        else if(str[t]>='0' && str[t]<='9'){
            digit=1;
        }
        else if(str[t]=='@' || str[t]=='#' || str[t]=='$' || str[t]=='&' || str[t]=='*'){
            special=1;
        }
        else{
            continue;
        }
    }

    if(upper==1 && lower==1 && digit==1 && special==1){
        printf("password is valid ");
    }
    else{
        printf("Enter a password must have 1 upper case and 1 lower case character 1 digit must, 1 special character must...");
    }
    }
    else{
        printf("Password must be less 8 and grater than 12 char");
    }







}
