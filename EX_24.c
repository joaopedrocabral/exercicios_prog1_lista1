#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a1, q, n;
    double p;

    printf("\nDIGITE O PRIMEIRO TERMO DA P.G: ");
        scanf(" %d", &a1);

    printf("\nDIGITE A RAZAO DA P.G: ");
        scanf(" %d", &q);

    printf("\nDIGITE A QUANTIDADE DE TERMOS DA P.G: ");
        scanf(" %d", &n);

        p = pow(a1, n) * pow(q, ((n*(n-1))/2.0));
        
        printf("\nO PRODUTO DOS %d TERMOS DA P.G E: %.2f\n", n, p);

    return 0;
}