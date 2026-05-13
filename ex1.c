
#include <stdio.h>
int main() {
int numeros[10];
int pos;
 // leia 10 números
 // Exiba os 10 números
for (pos = 0; pos < 10; pos ++){
    printf ("Digite o número da posição %d: ", pos);
    scanf("%d", &numeros[pos]);
}

printf("Valores registrados; \n");
for (pos = 0; pos < 10; pos++){
    printf("numeros[%d] = %d\n", pos, numeros[pos]);
}
    return 0;
}
