#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, c;
    float b;
    // a = antercessor, c = sucessor, b = numero

    printf("\nDIGITE O ANTECESSOR: ");
        scanf(" %d", &a);

    printf("\nDIGITE O SUCESSOR: ");
        scanf(" %d", &c);

    b = ((a + c)/2.0);

    printf("\nO RESULTADO DA P.A E: %.0f\n", b);

    return 0;
}