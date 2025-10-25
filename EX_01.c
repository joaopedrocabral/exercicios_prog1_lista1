#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("\nDIGITE UM NÚMERO INTEIRO: ");
        scanf("%d", &num);

    if (num%2==0)
    {
        printf("\nESSE NÚMERO É PAR!\n");
    } else {
        printf("\nESSE NÚMERO É ÍMPAR!\n");
    }
    
    system("pause");

    return 0;
}