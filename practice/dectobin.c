#include<stdio.h>
#include<math.h>
int main(){ 
int d, deci, bin = 0, r, p = 0;
printf("Enter a decimal number :");
scanf("%d",&d);
deci = d ;
while (d>0)
{
     r = d%2;
     bin = bin+r*pow(10,p);
     p = p+1 ;
     d = d/2 ;
}
printf("%d=%d",deci, bin);
return 0;
}
