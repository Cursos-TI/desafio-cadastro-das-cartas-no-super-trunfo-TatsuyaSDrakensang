#include <stdio.h>

int main() {

    // -------------------------
    // Variáveis para Carta 1
    // -------------------------
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;
    float superPoder1;

    // -------------------------
    // Variáveis para Carta 2
    // -------------------------
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;
    float superPoder2;

    // -------------------------
    // Entrada de dados Carta 1
    // -------------------------
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê até ENTER

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // -------------------------
    // Cálculos Carta 1
    // -------------------------
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = (float)populacao1 / area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // -------------------------
    // Entrada de dados Carta 2
    // -------------------------
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // -------------------------
    // Cálculos Carta 2
    // -------------------------
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float)populacao2 / area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // -------------------------
    // Saída de dados Carta 1
    // -------------------------
    printf("\n\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // -------------------------
    // Saída de dados Carta 2
    // -------------------------
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // -------------------------
    // Comparação das cartas
    // -------------------------
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2 ? 1 : 0); // menor ganha
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}

