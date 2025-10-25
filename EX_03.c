#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()  {

    char nome[15];
    char sexo[15];

    printf("\nDigite seu nome: ");
        scanf(" %s", &nome);

    printf("\nDigite o seu sexo (MASCULINO OU FEMININO): ");
        scanf(" %s", &sexo);

    if(strcmp(sexo,"MASCULINO") == 0) {
        printf("\nIlmo Sr. %s", nome);
    } else if (strcmp(sexo, "FEMININO") == 0) {
        printf("\nIlma Sra. %s", nome);
    } else {
        printf("\nHOUVE UM ERRO NA DIGITAÇÃO DO SEXO, REINICIE O PROGRAMA E TENTE NOVAMENTE!");
    }

    system("pause");

    return 0;
}