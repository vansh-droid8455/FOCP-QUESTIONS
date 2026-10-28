#include<stdio.h>
int main()
{
    char s1[]="abc",s2[]="abc";
    if(strcmp(s1,s2)==0)
    printf("equal");
    else
    printf("not equal");
}