#include <stdio.h>
int main()
{
int p ,t ,r ,si;
printf("Enter principle, time, and rate.");
scanf("\n%d \n%d \n%d", &p , &t , &r);
si= p*t*r/100;
printf("The simple interest is Rs %d\n",si);

return 0;
}