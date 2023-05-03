#include<stdio.h>
#include<math.h>
int main(){ 
int b, deci = 0, bin, r, p = 0;
printf("Enter a binary number :");
scanf("%d",&b);
bin = b ;
while (b>0)
{
     r = b%10 ;
     deci = deci+r*pow(2,p);
     p = p+1 ;
     d = d/10 ;
}
printf("%d=%d",bin, deci);
return 0;
}
