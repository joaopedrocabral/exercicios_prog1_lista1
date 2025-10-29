#include <stdio.h>
#include <stdlib.h>

int main(){
    int placa, milhar;

    printf("\nDIGITE A PLACA DO SEU VEICULO (4 numeros): ");
        scanf(" %d", &placa);

    placa = abs((placa));
    milhar = (placa % 10000) / 1000;

    printf("\nO ALGORISMO CORRESPONDENTE A UNIDADE DE MILHAR E: %d", milhar);

    return 0;
}