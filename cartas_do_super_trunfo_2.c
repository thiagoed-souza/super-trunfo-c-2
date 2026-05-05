#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main() {
    // ==== Declaração de variáveis Carta 1 ==== 
    char estado1[3], codigo1[10], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // ==== Declaração de variáveis Carta 2 ====
    char estado2[3], codigo2[10], cidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2; 
    float densidade2, pibPerCapita2, superPoder2;

    // ==== Entrada de dados para Carta 1 ====
    printf("=== Carta 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em reais): ");
    scanf("%f", &pib1);

    printf("Ponto turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ==== Entrada de dados para Carta 2 ====
    printf("\n=== Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %s", estado2);

    printf("Código: ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em reais): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ==== CÁLCULOS ====
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibPerCapita1 = pib1 / (float)populacao1;
    pibPerCapita2 = pib2 / (float)populacao2;

    // ==== Saída Carta 1 ====
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    // ==== Saída Carta 2 ====
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    // Calcular e armanezar a Densiddade Populacional e o PIB per Capita para ambas as cartas


    // Calcular o Super poder (somando todos os atributos numéricos) para ambas as cartas (população, área, PIB, pontos turísticos, densidade populacional (é o invers da densidade) e PIB per capita)
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + (1.0 / densidade1) + pibPerCapita1;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (1.0 / densidade2) + pibPerCapita2;

    // Comparar os Super poderes das duas cartas e determinar qual é a carta vencedora (aquela com o maior Super poder)
    if (superPoder1 > superPoder2) {
        printf("\nO vencedor é a Carta 1 com Super Poder: %.2f\n", superPoder1);
    } else if (superPoder2 > superPoder1) {
        printf("\nO vencedor é a Carta 2 com Super Poder: %.2f\n", superPoder2);
    } else {
        printf("\nEmpate! Ambas têm Super Poder: %.2f\n", superPoder1);
    }

    // Exibir o resultado da comparação, indicando qual carta é a vencedora e o valor do Super poder de cada carta
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    printf("Atributo: População\n\n");

    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {    
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate nas populações!\n");
    }
    
    // === Comparação Final (Super Poder) ===

    printf("\n--- Duelo de Super Poder ---\n");
    printf("Valor Carta 1: %.2f\n", superPoder1);
    printf("Valor Carta 2: %.2f\n", superPoder2);

    if (superPoder1 > superPoder2) {
        printf("Veredito: Carta 1 (%s) é a grande campeã!\n", cidade1);
    } else if (superPoder2 > superPoder1) {
        printf("Veredito: Carta 2 (%s) é a grande campeã!\n", cidade2);
    } else {
        printf("Veredito: Empate! Ambas as cartas são grandes campeãs!\n");
    }


    printf("\nPressione qualquer tecla para sair...");
    getch();

    return 0;

}