#include <stdio.h>
int main(){
int a,b,c;
printf("input side a=");
scanf("%d",&a);
printf("input side b=");
scanf("%d",&b);
printf("input side c=");
scanf("%d",&c);
if(a==b && a==c)
printf("it is eqilateral triangle");
else if(a==b || b==c || a==c)
printf("it is issoceles triangle");
else
printf("it is scalane triangle");

}

