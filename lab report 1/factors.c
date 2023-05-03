//WAP to display the Factors of an input number. 
#include <stdio.h>
int main() {
    
    int n, f = 0; // f is the number of factors, n is the entered number
    printf("Enter a number: ");
    scanf("%d", &n);

    // loop runs upto 1 - n
    // NOTE: int i must be 1 and can not be 0

    for(int i = 1; i <= n; i++) {
        /** at every iteration, the value of i changes
         * modulo operator is used to get the remainder of the entered number (n) by counter variable i
         * if the number is perfectly divisble by the interative number that is, remainder is 0
         * factor is found and f is incremented 
         * **/

        if(n % i == 0)
            f++;
    }

    printf("There are %d factors of %d", f, n);
    return 0;
}