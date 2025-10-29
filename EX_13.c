#include <stdio.h>
#include <stdlib.h>

int main(){
    int placa, centenas;

    printf("\nDIGITE A PLACA DO SEU VEICULO (4 numeros): ");
        scanf(" %d", &placa);
    
    placa = abs(placa);
    centenas = (placa % 1000) / 100;

    printf("\nO ALGORISMO CORRESPONDENTE AS CENTENAS E: %d", centenas);

    return 0;
}