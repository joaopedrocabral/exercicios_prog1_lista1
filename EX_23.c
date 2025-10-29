#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a, c;
    float b;

    printf("\nDIGITE O ANTECESSOR: ");
        scanf(" %d", &a);

    printf("\nDIGITE O SUCESSOR: ");
        scanf(" %d", &c);

    b = sqrt(a*c);

    printf("\nB EQUIVALE A: %.2f", b);

    return 0; 
}