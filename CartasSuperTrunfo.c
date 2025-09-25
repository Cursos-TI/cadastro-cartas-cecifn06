// super_trunfo_n3.c - Nível Mestre
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

    // Calculados
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

int main(void) {
    Carta carta1, carta2;

    printf("Cadastro de cartas - Nível Mestre\n\n");

    // ===== Entrada Carta 1 =====
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

    carta1.densidade = (float)carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / (float)carta1.populacao;
    carta1.super_poder = (float)carta1.populacao + carta1.area + carta1.pib +
                         carta1.pontos_turisticos + carta1.pib_per_capita + (1.0f / carta1.densidade);

    printf("\n");

    // ===== Entrada Carta 2 =====
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

    carta2.densidade = (float)carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / (float)carta2.populacao;
    carta2.super_poder = (float)carta2.populacao + carta2.area + carta2.pib +
                         carta2.pontos_turisticos + carta2.pib_per_capita + (1.0f / carta2.densidade);

    printf("\n");

    // ===== Comparação =====
    printf("=== Comparacao de Cartas ===\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Area: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", carta1.pontos_turisticos > carta2.pontos_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidade < carta2.densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pib_per_capita > carta2.pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.super_poder > carta2.super_poder);

    return 0;
}
