#include<stdio.h>
int main (){
    int fact=1,i,n;
    printf("input any number=");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("fact is %d",fact);
}