// 82)

#include <stdio.h>

int main() {
    float a[10] = {};
    float m[10] = {};
    float x;
    int i;
    
    for(i=0; i<10; i++) {
        printf("\nDigite o %d elemento: ", i+1);
        scanf("%f", &a[i]);
    }
    printf("\n\nDigite o fator multiplicativo: ");
    scanf("%f", &x);
    
    for(i=0; i<10; i++) {
        m[i] = a[i]*x;
    }
    printf("\n\nResultado: ");
    for(i=0; i<10; i++) {
        printf("\n%.2f x %.2f = %.2f", a[i], x, m[i]);
    }
    return 0;
}
