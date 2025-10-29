#include <stdio.h>
#include <stdlib.h>

int main() {
    int a1, an, n;
    float sn;
    // sn = resposta; a1 = primeiro termo; an = ultimo termo; n = numero de termos;

    printf("\nDIGITE O PRIMEIRO TERMO DA P.A: ");
        scanf(" %d", &a1);

    printf("\nDIGITE O ULTIMO TERMO DA P.A: ");
        scanf(" %d", &an);

    printf("\nDIGITE O NUMERO DE TERMOS DA P.A: ");
        scanf(" %d", &n);

    sn = ((a1+an)*n)/2;

    printf("\nO RESULTADO DA P.A E: %.2f\n", sn);

    return 0;
}