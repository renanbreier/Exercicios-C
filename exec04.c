#include <stdio.h>

int main(void) {

    int num = 0;
    printf("Escolha um numero: ");
    scanf("%i", &num);

    for (int contador = num; contador != 0; contador--){
        printf("%i\n", contador);

        if (contador == 1){
            printf("0\n");
        }
    }

    for (int contador1 = 1; contador1 != num; contador1++) {
        printf("-%i\n", contador1);

        int cont = num - 1;
        if (contador1 == cont){
            printf("-%i", num);
        }
    }

    return 0;
}