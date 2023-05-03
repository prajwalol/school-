#include <stdio.h>
int main()
{
    int i,n;
    for (i=1;i<=5;i++)
    {
        for (n=1;n<=i;n++)
        {
            printf("%d",n%2);
        }
        printf("\n");
    }
    return 0;
}