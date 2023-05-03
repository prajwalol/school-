#include <stdio.h>

int main() {
   float soap = 200, coil = 150, paste = 300;
   int s, o, p, t;
   s = soap * 10;
   o = coil * 15;
   p = paste * 12;
   t = s + o + p;
   printf("The total bill without discount is %d\n", t);

   return 0;
}
