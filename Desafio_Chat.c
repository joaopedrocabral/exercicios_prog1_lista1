#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[20], turno[10];

    printf("\nDigite seu nome:");
        scanf(" %s", nome);

    printf("\nDigite o seu turno:");
        scanf(" %s", turno);

    if (strcmp(turno, "MANHÃ")==0){
        printf("\nBom dia, %s", nome);
    
    } else if (strcmp(turno, "TARDE")==0){
        printf("\nBoa tarde, %s", nome);
    
    } else if (strcmp(turno, "NOITE")==0){
        printf("\nBoa noite, %s", nome);
   
    } else {
        printf("\nTurno ínvalido, reinicie o progrma e tente novamente!\n");
    }
    
    system("pause");

    return 0;
}