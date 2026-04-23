// 79)

#include <stdio.h>

int main() {
    float n[20] = {};
    int i;
    float soma = 0, ac_med = 0;
    float med;
    for(i=0; i<=19; i++) {
        printf("\nDigite a nota do %d aluno: ", i+1);
        scanf("%f", &n[i]);
        soma += n[i];
    }
    
    med = soma/20;
    for(i=0; i<=19; i++) {
        if(n[i] >= med) {
            ac_med += 1;
        }
    }
    printf("\n\n >>> A média da turma foi de %.2f. \n >>> %.0f aluno(s) obtiveram nota a cima da média da sala.", med, ac_med);
    return 0;
}
