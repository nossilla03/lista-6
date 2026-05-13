#include <stdio.h>

int main() {

int numeros[10];
int c;

for(c = 1; c < 11; c++){
    printf("Informe o Valor da Posição %d: ", c);
    scanf("%d", &numeros[c]);
    
    if(numeros[c] < 0){
        numeros[c] = 0;
    }
    else{
        
    }
}
printf("NOVO VETOR: ");
for(c = 1; c < 11; c++){
    printf("\nPosiçao %d: %d", c, numeros[c]);
}
    

    return 0;
}
