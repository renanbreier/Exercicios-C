#include <stdio.h>

int main(void) {

    int a = 1, b = 1, c;
    float num;
    int contador;

    printf("Escolha um numero para calcular a sequencia de Fibonacci: ");
    scanf("%f", &num);

    if (num == (int) num) {
    }else{
        printf("O número é invalido pois não é inteiro!\n");
        return 0;
    }

    if (num < 0){
        printf("O número é invalido pois não é um número positivo!");
        return 0;
    }

    printf("A sequencia de Finonacci eh: \n");

    for (contador = 1; contador <= num; contador++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
