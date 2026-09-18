#include <stdio.h>

int main(void) {
    /* Types caractères */
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    /* Types entiers courts */
    short s = -32000;
    unsigned short us = 65000;

    /* Types entiers standards */
    int i = -100000;
    unsigned int ui = 4000000000U;

    /* Types entiers longs */
    long int li = -2000000000L;
    unsigned long int uli = 4000000000UL;

    /* Types entiers très longs */
    long long int lli = -9000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL;

    /* Types à virgule flottante */
    float f = 3.14159f;
    double d = 3.141592653589793;
    long double ld = 3.14159265358979323846L;

    /* Affichage */
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short : %d\n", s);
    printf("unsigned short : %hu\n\n", us);

    printf("int : %d\n", i);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n\n", uli);

    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}