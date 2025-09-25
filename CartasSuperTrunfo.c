// super_trunfo_n1.c - Nível Novato
#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

typedef struct {
    char estado;               // Uma letra (A-H)
    char codigo[5];            // Ex: "A01"
    char nome[NAME_LEN];       // Nome da cidade
    unsigned long int populacao; // Número de habitantes (já preparado p/ nivel 3)
    float area;                // Área em km²
    float pib;                 // PIB da cidade
    int pontos_turisticos;     // Número de pontos turísticos

    // Campos extras (ainda não usados neste nível, mas já prontos p/ evolução)
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

int main(void) {
    Carta carta1, carta2;

    printf("Cadastro de cartas - Nível Novato\n\n");

    // ===== Carta 1 =====
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    getchar(); // limpar o enter pendente
    fgets(carta1.nome, NAME_LEN, stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = '\0'; // remove o \n do fgets

    printf("Populacao (numero inteiro): ");
    scanf("%lu", &carta1.populacao);

    printf("Area (km2, ex: 123.45): ");
    scanf("%f", &carta1.area);

    printf("PIB (ex: 1234567.89): ");
    scanf("%f", &carta1.pib);

    printf("Pontos turisticos (inteiro): ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n");

    // ===== Carta 2 =====
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    getchar(); // limpar o enter pendente
    fgets(carta2.nome, NAME_LEN, stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = '\0';

    printf("Populacao (numero inteiro): ");
    scanf("%lu", &carta2.populacao);

    printf("Area (km2, ex: 123.45): ");
    scanf("%f", &carta2.area);

    printf("PIB (ex: 1234567.89): ");
    scanf("%f", &carta2.pib);

    printf("Pontos turisticos (inteiro): ");
    scanf("%d", &carta2.pontos_turisticos);

    printf("\n");

    // ===== Exibir as cartas =====
    printf("=== Cartas cadastradas ===\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nome);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n\n", carta1.pontos_turisticos);

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nome);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n\n", carta2.pontos_turisticos);

    return 0;
}

}
