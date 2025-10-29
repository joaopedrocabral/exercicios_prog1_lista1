#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, numA, numS;
    //num = Número digitado pelo usuário;
    //numA = Antecessor; numS = Sucessor.

    printf("\nDIGITE UM NUMERO: ");
        scanf(" %d", &num);

    numA = num-1;
    numS = num+1;

    printf("\nO SUCESSOR de %d e %d e o ANTECESSOR e %d", num, numS, numA);

    return 0;
}