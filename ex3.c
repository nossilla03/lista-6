#include <stdio.h>
int main() {
int numeros [10];
int pos, maior; 

for ( pos = 0; pos < 10; pos++){
    printf ("Digite o valor desejado da posição %d: ", pos);
    scanf ("%d", & numeros[pos]);
    
}
maior = numeros[0];
for (pos = 0; pos < 10; pos++){
    if (numeros[pos] > maior){
        maior = numeros[pos];
    }
}
printf ("O maior numero é %d", maior);
    return 0;
}
