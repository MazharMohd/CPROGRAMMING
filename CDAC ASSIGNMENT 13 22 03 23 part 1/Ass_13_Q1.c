//wap to subtarct two matrix
#include<stdio.h>

void main(){

int t[3][3];
int g[3][3];
int k[3][3];

int u,v;

printf("Enter value in 1st matrix\n");

for(u=0;u<3;u++){
    for(v=0;v<3;v++){
        scanf("%d",&t[u][v]);
    }
}


printf("Enter value in 2nd matrix\n");
for(u=0;u<3;u++){
    for(v=0;v<3;v++){
        scanf("%d",&g[u][v]);
    }
}

for(u=0;u<3;u++){
    for(v=0;v<3;v++){
        k[u][v] = t[u][v] + g[u][v];
    }
}

for(u=0;u<3;u++){
    for(v=0;v<3;v++){
        printf("%d ",k[u][v]);
    }
    printf("\n");
}

}
