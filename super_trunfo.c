#include <stdio.h>

int main() {
    // -------------------------------
    // Declaração de variáveis - Carta 1
    // -------------------------------
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // -------------------------------
    // Declaração de variáveis - Carta 2
    // -------------------------------
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // -------------------------------
    // Entrada de dados - Carta 1
    // -------------------------------
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (A-H): "); scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (ex: A01): "); scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("Digite a Populacao: "); scanf("%lu", &populacao1);
    printf("Digite a Area (km2): "); scanf("%f", &area1);
    printf("Digite o PIB: "); scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: "); scanf("%d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // -------------------------------
    // Entrada de dados - Carta 2
    // -------------------------------
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado (A-H): "); scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (ex: B02): "); scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("Digite a Populacao: "); scanf("%lu", &populacao2);
    printf("Digite a Area (km2): "); scanf("%f", &area2);
    printf("Digite o PIB: "); scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: "); scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // -------------------------------
    // Menu de Atributos
    // -------------------------------
    int escolha;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opcao: ");
    scanf("%d", &escolha);

    // -------------------------------
    // Comparação com switch
    // -------------------------------
    printf("\nComparacao de cartas:\n");

    switch(escolha) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %lu\n", nomeCidade1, populacao1);
            printf("%s: %lu\n", nomeCidade2, populacao2);
            if(populacao1 > populacao2)
                printf("Carta 1 (%s) venceu!\n", nomeCidade1);
            else if(populacao2 > populacao1)
                printf("Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", nomeCidade1, area1);
            printf("%s: %.2f\n", nomeCidade2, area2);
            if(area1 > area2)
                printf("Carta 1 (%s) venceu!\n", nomeCidade1);
            else if(area2 > area1)
                printf("Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", nomeCidade1, pib1);
            printf("%s: %.2f\n", nomeCidade2, pib2);
            if(pib1 > pib2)
                printf("Carta 1 (%s) venceu!\n", nomeCidade1);
            else if(pib2 > pib1)
                printf("Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d\n", nomeCidade2, pontosTuristicos2);
            if(pontosTuristicos1 > pontosTuristicos2)
                printf("Carta 1 (%s) venceu!\n", nomeCidade1);
            else if(pontosTuristicos2 > pontosTuristicos1)
                printf("Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", nomeCidade1, densidade1);
            printf("%s: %.2f\n", nomeCidade2, densidade2);
            if(densidade1 < densidade2)
                printf("Carta 1 (%s) venceu!\n", nomeCidade1);
            else if(densidade2 < densidade1)
                printf("Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 6: // PIB per Capita
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f\n", nomeCidade1, pibPerCapita1);
            printf("%s: %.2f\n", nomeCidade2, pibPerCapita2);
            if(pibPerCapita1 > pibPerCapita2)
                printf("Carta 1 (%s) venceu!\n", nomeCidade1);
            else if(pibPerCapita2 > pibPerCapita1)
                printf("Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
