// super_trunfo_n2.c - Nível Aventureiro
#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

typedef struct {
    char estado;               
    char codigo[5];            
    char nome[NAME_LEN];       
    unsigned long int populacao; 
    float area;                
    float pib;                 
    int pontos_turisticos;     

    // Novos campos calculados
    float densidade;
    float pib_per_capita;
} Carta;

int main(void) {
    Carta carta1, carta2;

    printf("Cadastro de cartas - Nível Aventureiro\n\n");

    // ===== Carta 1 =====
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    getchar(); 
    fgets(carta1.nome, NAME_LEN, stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = '\0';

    printf("Populacao (numero inteiro): ");
    scanf("%lu", &carta1.populacao);

    printf("Area (km2, ex: 123.45): ");
    scanf("%f", &carta1.area);

    printf("PIB (ex: 1234567.89): ");
    scanf("%f", &carta1.pib);

    printf("Pontos turisticos (inteiro): ");
    scanf("%d", &carta1.pontos_turisticos);

    // Calcula atributos adicionais
    carta1.densidade = (float)carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / (float)carta1.populacao;

    printf("\n");

    // ===== Carta 2 =====
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    getchar(); 
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

    // Calcula atributos adicionais
    carta2.densidade = (float)carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / (float)carta2.populacao;

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
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Demografica: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f\n\n", carta1.pib_per_capita);

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nome);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Demografica: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f\n\n", carta2.pib_per_capita);

    return 0;
}
