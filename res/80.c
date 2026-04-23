// 80)

#include <stdio.h>

int main() {
    int q[20] = {};
    int i;
    float maior, pos = 0;
    for(i=0; i<20; i++) {
        printf("\nDigite o %d valor: ", i+1);
        scanf("%d", &q[i]);
        if(q[i] <= 0) {
            printf("...O valor deve ser positivo e diferente de 0\n");
            i--;
        }
        if(q[i] > maior) {
            maior = q[i];
            pos = i;
        }
    }
    printf("\n\n>>> O valor do maior elemento é %.2f. Ele ocupa a %.0f posição no vetor e foi o %.0f número digitado.", maior, pos, pos+1);
    
    return 0;
}
