//display of regular matrix 2x2
#include<stdio.h>
int main(){

int matrix[2][2],i,j;
printf("Enter elements for 2x2 matrix\n");
for(i=0;i<2;i++){

for(j=0;j<2;j++){

printf("Element[%d][%d]?",i,j);
scanf("%d",&matrix[i][j]);
}

}
printf("\n display of your matrix:-\n");
for (i=0;i<2;i++){

for(j=0;j<2;j++){

printf("%d",matrix[i][j]);
}
printf("\n");
}
return 0;
}
