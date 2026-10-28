#include <stdio.h>
int digital_count (int x)
{
    int count=0;
    if (x==0){
count=1;
    }
else{
    while(x>0){
        count++;
        x=x/10;
    }
}
return count;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("count of digits of number %d",digital_count(n));
}
