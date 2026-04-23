// 85)

#include <stdio.h>

int main() {
    float temp[365];
    float soma = 0, media_anual;
    float maior, menor;
    int dias_abaixo = 0;
    int i;

    for(i = 0; i < 365; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);

        soma += temp[i]; // Acumula para a média

        if(i == 0) {
            maior = temp[i];
            menor = temp[i];
        } else {
            if(temp[i] > maior) maior = temp[i];
            if(temp[i] < menor) menor = temp[i];
        }
    }

    media_anual = soma / 365;


    for(i = 0; i < 365; i++) {
        if(temp[i] < media_anual) {
            dias_abaixo++;
        }
    }

    printf("\n--- Relatorio Anual de Temperaturas ---");
    printf("\na) Menor temperatura do ano: %.1f°C", menor);
    printf("\nb) Maior temperatura do ano: %.1f°C", maior);
    printf("\nc) Temperatura media anual: %.2f°C", media_anual);
    printf("\nd) Dias com temperatura abaixo da media: %d dias\n", dias_abaixo);

    return 0;
}
