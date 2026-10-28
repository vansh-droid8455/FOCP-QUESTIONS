#include <stdio.h>
int main(){
int bill,unit;
printf("enter unit consumed=");
scanf("%d",&unit);
if(unit>=0 && unit<=100)
{
    bill=unit*2;
}
else if(unit>=101 && unit<=200)
{
    bill=unit*3;
}
else
{
    bill=unit*5;
}
printf("your bill is %d\n",bill);
}