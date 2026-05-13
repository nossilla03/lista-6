#include <stdio.h>
int main() {
int numeros[8];
int i, soma = 0;

for (i = 0; i < 8; i++){
    printf("DIgite o nùmero da posição desejada %d: ", i);
    scanf("%d", &numeros[i]);
    soma = soma + numeros[i];
    
}
    printf (" A Soma é: %d", soma);
    return 0;
}
