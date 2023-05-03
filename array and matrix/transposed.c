//display of transposed matrix
//display of regular matrix
#include<stdio.h>
int main(){

int matrix[3][3],i,j;
printf("Enter elements for 3x3 matrix\n");
for(i=0;i<3;i++){

for(j=0;j<3;j++){

printf("Element[%d][%d]?",i,j);
scanf("%d",&matrix[i][j]);
}

}
printf("\n display of your regular matrix:-\n");
for (i=0;i<3;i++){

for(j=0;j<3;j++){

printf("%d",matrix[i][j]);
}
printf("\n");
}
printf("\n display of your transposed matrix:-\n");
for (i=0;i<3;i++){

for(j=0;j<3;j++){

printf("%d",matrix[j][i]);
}
printf("\n");
}
return 0;
}