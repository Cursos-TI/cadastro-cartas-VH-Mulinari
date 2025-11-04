#include <stdio.h>
    int main(){
        char estado1[50];
        char cidade1[50];
        char codigo1[5];
        int população1, pontost1;
        float area1;
        float pib1;

        printf("Estado: \n");
        scanf("%s", &estado1);

        printf("Código: \n");
        scanf("%s", &codigo1);

        printf("Nome da Cidade: \n");
        scanf("%s", &cidade1);

        printf("População: \n");
        scanf("%d", &população1);

        printf("Área: \n");
        scanf("%f", &area1);
        
        printf("PIB: \n");
        scanf("%f", &pib1);

        printf("Número de Pontos Turísticos: \n");
        scanf("%d", &pontost1);

        printf("Carta 1:\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %d\n", população1);
        printf("Área: %f\n", area1);
        printf("PIB: %f\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontost1 );

    }