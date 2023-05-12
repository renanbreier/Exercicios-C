#include <stdio.h>

int main(void) {

    int tabuada = 0;
    printf("\nDigite a tabuada que voce deseja: ");
    scanf("%i", &tabuada);

    for(int x = 2; x<=9; ++x){
        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}