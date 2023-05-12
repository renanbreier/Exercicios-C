#include <stdio.h>

int main(void) {

    int num = 0;
    printf("Escolha um numero: ");
    scanf("%i", &num);

    for (int contador = 0; contador < num; ++contador) {
        printf("%i\n", num);
    }

    return 0;
}
