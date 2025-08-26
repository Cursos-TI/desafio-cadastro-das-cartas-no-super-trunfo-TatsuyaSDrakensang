#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct {
    char estado[50];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para calcular densidade demográfica
float calcularDensidade(Carta c) {
    return c.populacao / c.area;
}

// Função para mostrar atributos de forma legível
void mostrarAtributo(Carta c, int atributo) {
    switch (atributo) {
        case 1: printf("População: %d", c.populacao); break;
        case 2: printf("Área: %.2f", c.area); break;
        case 3: printf("PIB: %.2f", c.pib); break;
        case 4: printf("Pontos Turísticos: %d", c.pontos_turisticos); break;
        case 5: printf("Densidade Demográfica: %.2f", calcularDensidade(c)); break;
        default: printf("Atributo inválido");
    }
}

// Função para obter valor numérico do atributo
float obterValor(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontos_turisticos;
        case 5: return calcularDensidade(c);
        default: return -1; // inválido
    }
}

// Função para comparar dois atributos
int compararAtributo(float v1, float v2, int atributo) {
    // regra: maior valor vence, exceto densidade (atributo 5), onde menor vence
    if (atributo == 5) {
        return (v1 < v2) ? 1 : (v2 < v1 ? 2 : 0);
    } else {
        return (v1 > v2) ? 1 : (v2 > v1 ? 2 : 0);
    }
}

int main() {
    // Duas cartas pré-cadastradas
    Carta carta1 = {"SP", "Brasil", 214000000, 8516000.00, 1900000.00, 500};
    Carta carta2 = {"CA", "Canadá", 38000000, 9985000.00, 1800000.00, 600};

    int atributo1, atributo2;
    float valor1c1, valor1c2, valor2c1, valor2c2, soma1, soma2;

    printf("=== SUPER TRUNFO - Nível Mestre ===\n");
    printf("Comparando: %s vs %s\n\n", carta1.nome, carta2.nome);

    // Menu para escolha do primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n> ");
    scanf("%d", &atributo1);

    // Menu dinâmico para o segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("%d - População\n", i); break;
                case 2: printf("%d - Área\n", i); break;
                case 3: printf("%d - PIB\n", i); break;
                case 4: printf("%d - Pontos Turísticos\n", i); break;
                case 5: printf("%d - Densidade Demográfica\n", i); break;
            }
        }
    }
    printf("> ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {
        printf("Opções inválidas! Encerrando...\n");
        return 1;
    }

    // Obter valores para cada carta
    valor1c1 = obterValor(carta1, atributo1);
    valor1c2 = obterValor(carta2, atributo1);
    valor2c1 = obterValor(carta1, atributo2);
    valor2c2 = obterValor(carta2, atributo2);

    // Calcular soma
    soma1 = valor1c1 + valor2c1;
    soma2 = valor1c2 + valor2c2;

    // Mostrar resultados
    printf("\n--- RESULTADO DA RODADA ---\n");
    printf("%s:\n", carta1.nome);
    mostrarAtributo(carta1, atributo1); printf("\n");
    mostrarAtributo(carta1, atributo2); printf("\n");
    printf("Soma: %.2f\n\n", soma1);

    printf("%s:\n", carta2.nome);
    mostrarAtributo(carta2, atributo1); printf("\n");
    mostrarAtributo(carta2, atributo2); printf("\n");
    printf("Soma: %.2f\n\n", soma2);

    // Comparação final
    if (soma1 > soma2) {
        printf("Vencedor: %s!\n", carta1.nome);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s!\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }

    return 0;
}