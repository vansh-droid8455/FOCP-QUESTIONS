#include <stdio.h>
int main(){
    char op;
    int a,b;
    printf("input operator(+,-,*,/)=");
    scanf("%c",&op);
    printf("input a=");
    scanf("%d",&a);
     printf("input b=");
    scanf("%d",&b);
    switch (op)
    {
    case '+':
        printf("%d",addition);
        break;
    case '-':
    printf("%d", sub);
    break;
    case '*':
    printf("%d", mult is );
    break;
    case '/':
    printf("%d", division is );
    break;
    default:
    printf("invalid operator");

        break;
    }
}