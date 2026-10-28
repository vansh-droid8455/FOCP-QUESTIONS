#include<stdio.h>
int main ()
{
    char s1[10],s2[10];
    int l,m;
    printf("enter your name=");
    scanf("%s",s1);
    printf("enter your name=");
    scanf("%s",s2);
    l=strlen(s1);
    m=strlen(s2);
    printf("%d\n",l);
    printf("%d",m);
}