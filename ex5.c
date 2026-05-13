#include <stdio.h>

int main() {
    int numeros[10];
    int c, valor = 0, encontrou = 0;
    
    for(c = 0; c < 10; c ++){
        printf("Digite o número da posição %d: ", c);
        scanf("%d", &numeros[c]);
    }
    printf("\nBUSCA DE VALORES\n");
    printf("Digite o Valor a ser Buscado: ");
    scanf("%d", &valor);
    for(c = 0; c < 10; c++){
        if(numeros[c] == valor){
            encontrou = 1;
        }
    }
    if(encontrou = 1){
        printf("Valor Encontrado!");
    }
    else{
        printf("Valor Não Encontrado!");
    }

    return 0;
}
