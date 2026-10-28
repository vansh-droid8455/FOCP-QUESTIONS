#include<stdio.h>
int main(){
char ch;
printf("input any character=");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
{
printf("it is a capital letter");
}
else if(ch>='a' && ch<='z')
{
printf("it is a small letter");
}
else
printf("it may be number or special character");
}
