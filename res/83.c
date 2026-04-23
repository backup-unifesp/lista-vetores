// 83)

#include <stdio.h>

int main() {
    float num[10] = {};
    float inv[10] = {};
    int i, i2 = 0;
    
    for(i=0; i<10; i++) {
        printf("\nDigite o %d elemento: ", i+1);
        scanf("%f", &num[i]);
    }
    for(i=9; i>=0; i--) {
        inv[i] = num[i2];
        i2++;
    }
    printf("\n\nNúmeros fornecidos: ");
    for(i=0; i<10; i++) {
        printf(" %.2f |", num[i]);
    }
    printf("\n\nOrdem inversa: ");
    for(i=0; i<10; i++) {
        printf(" %.2f |", inv[i]);
    }
    return 0;
}
