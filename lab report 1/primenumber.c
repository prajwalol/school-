// wap to print prime numbers from 1 to 100.
#include <stdio.h>
int main ()
{
int i,n,c;
//checking for prime numbers
for(n=1; n<=100; n++)
{
    c=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    //checking & printing prime numbers
    if(c==0 && n!=1){
        printf("%d\n",n);
    }
}
    return 0;
}
