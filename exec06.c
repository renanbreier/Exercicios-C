#include <stdio.h>

int main(void) {

    int num1, num2, num3;
    int a, contador = 0;

    printf("Escolha um numero que seja maior que 1: ");
    scanf("%i", &num1);

    printf("Escolha um segundo numero: ");
    scanf("%i", &num2);

    printf("Por ultimo, escolha um numero que seja maior que o segundo numero escolhido: ");
    scanf("%i", &num3);

    for (a = ++num2; a < num3; ++a) {
        if ( a % num1 == 0) {
            printf("%i\n", a);
            contador++;
        }
    }

    printf("Entre o numero %i e %i possuem %i numeros divisiveis por %i", --num2, num3, contador, num1);

    return 0;
}