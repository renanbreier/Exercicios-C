#include <stdio.h>

int main(void){

    int numero, maneira = 0;
    int dado1 = 0, dado2 = 0, dado3 = 0;

    printf("Por favor, escolha um numero entre 3 e 18: ");
    scanf("%i", &numero);

    for(dado1 = 1; dado1 < 6; dado1++){
        for(dado2 = 1; dado2 < 6; dado2++){
            for(dado3 = 1; dado3 < 6; dado3++){
                if(dado1 + dado2 + dado3 == numero) {
                    maneira++;
                }
            }
        }
    }

    printf("O numero %i pode ser representado por %i maneiras diferentes, usando tres dados. ", numero, maneira);

    return 0;
}