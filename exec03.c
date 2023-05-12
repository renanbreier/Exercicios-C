#include <stdio.h>

int main(void) {

    int num = 0;
    printf("Escolha um numero: ");
    scanf("%i", &num);

    for (int contador = num; contador != 0; contador--){
        printf("%i\n", contador);

        if (contador == 1){
            printf("0");
        }
    }

    return 0;
}
