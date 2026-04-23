// 84)

#include <stdio.h>

int main() {
    int i, tam;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tam);
    printf("\n\n");
    
    float a[tam];
    float b[tam];
    float som[tam];
    
    for(i=0; i<tam; i++) {
        printf("%d° elemento do vetor A: ", i+1);
        scanf("%f", &a[i]);

        printf("%d° elemento do vetor B: ", i+1);
        scanf("%f", &b[i]);
        
        printf("\n\n");
        
        som[i] = a[i] + b[i];
    }
    
    printf("\nVetor A: ");
    for(i=0; i<tam; i++) {
        printf(" %.2f |", a[i]);
    }
    
    printf("\nVetor B: ");
    for(i=0; i<tam; i++) {
        printf(" %.2f |", b[i]);
    }
    
    printf("\nVetor Soma: ");
    for(i=0; i<tam; i++) {
        printf(" %.2f |", som[i]);
    }
    return 0;
}
