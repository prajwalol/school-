//data sorting in array

#include<stdio.h>
main()
{
int num[10],i,j,temp;
printf("Enter any 10 random numbers\n");
for(i=0; i<10; i++){
printf("%d number?"),i+1;
scanf("%d",&num[i]);
}
for(i=0; i<10;i++)
{
for(j=0; j<10;j++)
{
if(num[i]>num[j])
{
temp=num[i];
num[i]=num[j];
num[j]=temp;
}
}
}
printf("\nThe sorted data;\n");
for(i=0; i<10;i++){
printf("%d\n,num[i]");
}
return 0;
}
