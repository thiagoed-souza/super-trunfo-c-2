#include <stdio.h>

int main() {
    // ==== Declaração de variáveis Carta 1 ==== 
    char estado1[3];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;

    // ==== Declaração de variáveis Carta 2 ====
    char estado2[3];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;

    // ==== Entrada de dados para Carta 1 ====
    printf("=== Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em reais): ");
    scanf("%f", &pib1);

    printf("Ponto turisticos: ");
    scanf("%d", &pontos1);

    // ==== Entrada de dados para Carta 2 ====
    printf("\n=== Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em reais): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ==== CÁLCULOS ====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // ==== Saída Carta 1 ====
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    // ==== Saída Carta 2 ====
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;

}