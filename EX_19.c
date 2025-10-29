#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2;

    printf("\nDIGITE UM NUMERO: ");
        scanf(" %f", &num1);

    printf("\nDIGITE OUTRO NUMERO: ");
        scanf(" %f", &num2);

    printf("\nMEDIA DE %.2f E %.2f e %.2f", num1, num2, (num1+num2)/2);

    return 0;
}