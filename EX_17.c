#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;

    printf("\nDIGITE O PRIMEIRO NUMERO: ");
        scanf(" %d", &num1);

    printf("\nDIGITE O SEGUNDO NUMERO: ");
        scanf(" %d", &num2);

    printf("SOMA DE %d + %d = %d\n", num1, num2, (num1+num2));

    return 0;
}