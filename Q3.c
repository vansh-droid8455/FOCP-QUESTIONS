#include <stdio.h>
int greatest_number(int x,int y)
{
    if(x>y){
        return x;
    }else{
        return y;
    }
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("greatest number %d",greatest_number(a,b));
}