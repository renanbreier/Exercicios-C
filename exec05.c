#include <stdio.h>

int main(void){

    int num1 = 2;
    int num2 = 0;
    printf("Para comecar, escolha entre 0 ou 1: ");
    scanf("%i", &num1);

    if (num1 == 0 || num1 == 1) {

        printf("Agora, escolha um outro valor qualquer: ");
        scanf("%i", &num2);

        if (num1 == 1) {

            for (int contador = num2; contador != 0; contador--) {
                printf("%i\n", contador);

                if (contador == 1) {
                    printf("0");
                }
            }
        }

        else if (num1 == 0) {

            for (int contador = 0; contador != num2; contador++) {
                printf("%i\n", contador);

                int cont = num2 - 1;
                if (contador == cont){
                    printf("%i", num2);
                }
            }

        }
    }

    else {
        printf("Numero incorreto! Por favor escolha entre 0 ou 1\n");
    }

    return 0;
}