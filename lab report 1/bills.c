#include <stdio.h>

int main() {
   float csoap, coil, cpaste;
   int s, o, p, t;

   // Read input from the user
   printf("Enter the price of a soap: ");
   scanf("%f", &csoap);

   printf("Enter the price of a bottle of oil: ");
   scanf("%f", &coil);

   printf("Enter the price of a tube of toothpaste: ");
   scanf("%f", &cpaste);

   // Calculate the total bill
   s = csoap * 10;
   o = coil * 15;
   p = cpaste * 12;
   t = s + o + p;

   // Print the result
   printf("The total bill without discount is %d\n", t);

   return 0;
}
