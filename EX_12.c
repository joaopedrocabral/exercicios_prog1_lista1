#include <stdio.h>
#include <stdlib.h>

int main(){
    int placa, dezenas;

    printf("\nDIGITE A PLACA DO SEU VEICULO (apenas numeros): ");
        scanf("%d", &placa);
        
    placa = abs(placa);
    dezenas = (placa % 100) / 10;

    printf("\nO ALGARISMO CORRESPONDENTE A CASA DAS DEZENAS E: %d", dezenas);

    return 0;
}