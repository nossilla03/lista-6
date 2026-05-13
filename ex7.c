#include <stdio.h>

int main() {

int numeros[8];
int c;

for(c = 1; c < 9; c++){
    printf("Informe o Valor da Posição %d: ", c);
    scanf("%d", &numeros[c]);
}

for(c = 8; c > 0; c--){
    printf("\nValor da Posição [%d]: %d", c, numeros[c]);
    
}
    return 0;
}
