// wap to display (3,3) matrix coloume wise


#include<stdio.h>
void main(){


int d[3][3];

int y,g;

printf("Enter value n array : \n");
for(y=0;y<3;y++){
    for(g=0;g<3;g++){
        scanf("%d",&d[y][g]);
    }
}
printf("Display array row wise: \n");
for(y=0;y<3;y++){
    for(g=0;g<3;g++){
        printf("%d ",d[y][g]);
    }
    printf("\n");
}
printf("Display array colome wise : \n\n");
for(y=0;y<3;y++){
    for(g=0;g<3;g++){
        printf("%d ",d[g][y]);
    }
    printf("\n");
}
}

