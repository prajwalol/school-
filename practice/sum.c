#include<stdio.h>
int main(){
int a, b, sum, difference, product, ch;
printf("enter any two numbers");
scanf("%d%d", &a , &b);
printf("sum , difference, product,(1,2,3)");
scanf("%d",&ch);
switch (ch)
{
    case 1:
    sum= a+b ;
    break;
    case 2:
    difference= a-b ;
    break;
    case 3:
    product= a*b ;
    break;
    default:
    printf("\nThankyou");
}
return 0;
}