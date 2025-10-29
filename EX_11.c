#include <stdio.h>
#include <stdlib.h>

int main(){
    int placa, unidades;

    printf("\nDIGITE A PLACA DO SEU VEICULO: ");
        scanf(" %d", &placa);
    
    placa = abs(placa);
    unidades = placa % 10;

    printf("\nO ALGORISMO CORRESPONDENTE A CASA DAS UNIDADES E: %d", unidades);

    return 0;
}