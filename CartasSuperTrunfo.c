// super_trunfo.c - Nível Novato (apenas 2 cartas)
#include <stdio.h>

#define NAME_LEN 64

typedef struct {
    char estado;              // Uma letra (A-H)
    char codigo[5];           // Ex: "A01"
    char nome[NAME_LEN];      // Nome da cidade
    int populacao;            // Número de habitantes
    float area;               // Área em km²
    float pib;                // PIB da cidade
    int pontos_turisticos;    // Número de pontos turísticos
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

    printf("Populacao (numero inteiro): ");
    scanf("%d", &carta1.populacao);

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

    printf("Populacao (numero inteiro): ");
    scanf("%d", &carta2.populacao);

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
    printf("Cidade: %s", carta1.nome); // fgets já guarda o \n
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n\n", carta1.pontos_turisticos);

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s", carta2.nome);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n\n", carta2.pontos_turisticos);

    return 0;
}
