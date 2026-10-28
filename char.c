#include <stdio.h>
int main(){
    char ch;
    printf("input any character=");
    scanf("%c",&ch);
    switch(ch)
    {
        case a:
        case e:
        case 3:
        case 4:
        case 5:
        printf("it is a vowel");
        break;
        default:
        printf("it is consonant");
    }
}