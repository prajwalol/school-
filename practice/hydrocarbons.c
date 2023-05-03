// WAP to determine the name of basic hydrocarbon alkane, alkene and alkynes.
#include <stdio.h>
#include <conio.h>

int main() {
    int c, h;

    printf("Enter numbers of Carbon: ");
    scanf("%d", &c);

    printf("Enter numbers of Hydrogen: ");
    scanf("%d", &h);

    
    // if alkane
    if(h == (2 * c + 2)) {
        printf("C%dH%d is alkane\n", c, h);
        if(c == 1) return printf("Methane");
        if(c == 2) return printf("Ethane");
        if(c == 3) return printf("Propane");
        if(c == 4) return printf("Butane");
        if(c == 5) return printf("Pentane");
        if(c == 6) return printf("Hexane");
        if(c == 7) return printf("Heptane");
        if(c == 8) return printf("Octane");
        if(c == 9) return printf("Nonane");
        if(c == 10) return printf("Decane");
    }

    // if alkene
    if(h == (2 * c)) {
        printf("C%dH%d is alkene\n", c, h);
        if(c == 1) return printf("Methene");
        if(c == 2) return printf("Ethene");
        if(c == 3) return printf("Propene");
        if(c == 4) return printf("Butene");
        if(c == 5) return printf("Pentene");
        if(c == 6) return printf("Hexene");
        if(c == 7) return printf("Heptene");
        if(c == 8) return printf("Octene");
        if(c == 9) return printf("Nonene");
        if(c == 10) return printf("Decene");
    }
    // if alkyne
    if(h == (2 * c - 2)) {
        printf("C%dH%d is alkyne\n", c, h);
        if(c == 1) return printf("Methyne");
        if(c == 2) return printf("Ethyne");
        if(c == 3) return printf("Propyne");
        if(c == 4) return printf("Butyne");
        if(c == 5) return printf("Pentyne");
        if(c == 6) return printf("Hexyne");
        if(c == 7) return printf("Heptyne");
        if(c == 8) return printf("Octyne");
        if(c == 9) return printf("Nonyne");
        if(c == 10) return printf("Decyne");
    }

    return 0;
}
