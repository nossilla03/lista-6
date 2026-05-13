#include <stdio.h>

int main() {

    int a[5], b[5], c[5];
    int i;
    
    for(i = 0; i < 5; i++){
    printf("DIGITE O VALOR DO VETOR A: ");
    scanf("%d", &a[i]);
}
for(i = 0; i < 5; i++){
    printf("\nDIGITE O VALOR DO VETOR B: ", b[i]);
    scanf("%d", &b[i]);
}
for(i = 0; i < 5; i++){
   c[i] = a[i] + b[i];
   printf("\nVETOR C: %d", c[i]);
}

    return 0;
}
