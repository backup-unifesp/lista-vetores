// 81)

#include <stdio.h>

int main() {
    int q[20] = {};
    int i;
    float menor, pos;
    for(i=0; i<20; i++) {
        printf("\nDigite o %d valor: ", i+1);
        scanf("%d", &q[i]);
        if(q[i] <= 0) {
            printf("...O valor deve ser positivo e diferente de 0\n");
            i--;
        }
        if(i==0 || q[i] < menor) {
            menor = q[i];
            pos = i;
        }
    }
    printf("\n\n>>> O valor do menor elemento é %.2f. Ele ocupa a %.0f posição no vetor e foi o %.0f° número digitado.", menor, pos, pos+1);
    
    return 0;
}
