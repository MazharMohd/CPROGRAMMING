//wap to find greatest of 8 no using else if ladder.

#include<stdio.h>
int main(){

int p,q,r,s,t,u,v,w;
printf("Enter 8 no :  ");
scanf("%d%d%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u,&v,&w);

if(p>q && p>r && p>s && p>t && p>u && p>v && p>w){
    printf("%d is greatest",p);
}
else if(q>p && q>r && q>s && q>t && q>u && q>v && q>w){
    printf("%d is greatest",q);
}
else if(r>p && r>q && r>s && r>t && r>u && r>v && r>w){
    printf("%d is greatest",r);
}
else if(s>p && s>q && s>r && s>t && s>u && s>v && s>w){
    printf("%d is greatest",s);
}
else if(t>p && t>q && t>r && t>s && t>u && t>v && t>w){
    printf("%d is greatest",t);
}
else if(u>p && u>q && u>r  && u>s && u>t && u>v && u>w){
    printf("%d is greatest",u);
}
else if(v>p && v>q && v>r && v>s && v>t && v>u && v>w){
    printf("%d is greatest",v);
}
else if(w>p && w>q && w>r && w>s && w>t && w>u && w>v){
    printf("%d is greatest",w);
}

return 0;
}




//error : if we give two same no it does not return greatest  no it returns 0
