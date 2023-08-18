/*Q1: WAP TO PRINT THE FOLLOWING PATTERN? for loop

1
12
123
1234
12345


*/
#include<stio.h>
void main() {

int s,g,m;
printf("Enter a no : \n");
scanf("%d",&s);

for(g=1;g<=s;g++){

    for(m=1;m<=g;m++){
        printf("%d",m);
    }
    printf("\n");

}


}
