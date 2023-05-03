//data storing in array
#include<stdio.h>
#include<string.h>
void main()
{
int j,k;
char month[12][10]={
"JANUARY","FEBURARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER", "DECEMBER",
};
printf("Data stored in thearray variables are\n");
for(j=0; j<12;j++){
for(k=0; k<9;k++){printf("month[%d,%d]=%c\n",j,k,month[j][k]);}
printf("\n");
}
}