#include <stdio.h>
#include <stdlib.h>

int main(){
    float num;

    printf("\nDIGITE UM NUMERO: ");
        scanf(" %f", &num);

    printf("\nA TERCA PARTE DE %f E %.2f", num, (num/3));

    return 0;
}