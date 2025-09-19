// cartas.c - Nível Novato (apenas 2 cartas)
#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

typedef struct {
    char estado;              // Uma letra (A-H)
    char codigo[5];           // Ex: "A01"
    char nome[NAME_LEN];      // Nome da cidade
    int populacao;            // Número de habitantes
    double area;               // Área em km²
    double pib;                // PIB da cidade
    int pontos_turisticos;    // Número de pontos turísticos
} Carta;

int main(void) {
    Carta cartas[2];  // Apenas 2 cartas

    printf("Cadastro de cartas - Nível Novato\n\n");

    for (int i = 0; i < 2; i++) {
        printf("--- Cadastro da Carta %d ---\n", i + 1);

        // Estado (apenas 1 letra)
        printf("Estado (A-H): ");
        scanf(" %c", &cartas[i].estado);

        // Código da carta
        printf("Codigo da carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        // Nome da cidade (pode ter espaços)
        printf("Nome da cidade: ");
        getchar(); // limpar buffer do enter anterior
        fgets(cartas[i].nome, NAME_LEN, stdin);
        size_t ln = strlen(cartas[i].nome);
        if (ln > 0 && cartas[i].nome[ln - 1] == '\n')
            cartas[i].nome[ln - 1] = '\0';

        // População
        printf("Populacao (numero inteiro): ");
        scanf("%d", &cartas[i].populacao);

        // Área
        printf("Area (km2, ex: 123.45): ");
        scanf("%f", &cartas[i].area);

        // PIB
        printf("PIB (ex: 1234567.89): ");
        scanf("%f", &cartas[i].pib);

        // Pontos turísticos
        printf("Pontos turisticos (inteiro): ");
        scanf("%d", &cartas[i].pontos_turisticos);

        printf("\n");
    }

    // Exibir as cartas cadastradas
    printf("=== Cartas cadastradas ===\n\n");
    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].nome);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n\n", cartas[i].pontos_turisticos);
    }

    return 0;
}
