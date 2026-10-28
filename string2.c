#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    int l;
    printf("enter your name=");
    scanf("%s",name);
    l=strlen(name);
    printf("length of string is %d",l);
}