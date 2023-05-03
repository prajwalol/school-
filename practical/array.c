#include <stdio.h>
int main()
{
int num[15], i,j, max = 0;
for (i = 0; i < 15; i++)
{
printf("Enter marks in computer science of %d students ",i+1);
scanf("%d", &num[i]);
}
for (j = 0; j < 15; j++)
{
if (num[j] > max)
max = num[j];
}
printf("\n The highest marks= %d", max);
return 0;
}
//array is the similar name given to different variables of same data types.