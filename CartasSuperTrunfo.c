// cartas.c  - Nível Novato
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STATES 8
#define CITIES_PER_STATE 4
#define NAME_LEN 64

typedef struct {
    char codigo[5]; // ex: "A01"
    char nome[NAME_LEN];
    long long populacao;
    double area;
    double pib;
    int pontos_turisticos;
} Carta;

int main(void) {
    Carta cartas[STATES * CITIES_PER_STATE];
    int idx = 0;
    char stateLetter = 'A';

    printf("Cadastro de cartas - Nível Novato\n");
    printf("Serao cadastradas %d estados x %d cidades = %d cartas\n\n",
           STATES, CITIES_PER_STATE, STATES * CITIES_PER_STATE);

    for (int s = 0; s < STATES; ++s) {
        for (int c = 1; c <= CITIES_PER_STATE; ++c) {
            Carta *p = &cartas[idx];
            snprintf(p->codigo, sizeof p->codigo, "%c%02d", stateLetter + s, c);

            printf("--- Cadastro %s ---\n", p->codigo);
            printf("Nome da cidade: ");
            if (fgets(p->nome, NAME_LEN, stdin) == NULL) p->nome[0] = '\0';
            size_t ln = strlen(p->nome);
            if (ln > 0 && p->nome[ln-1] == '\n') p->nome[ln-1] = '\0';

            printf("Populacao (numero inteiro): ");
            if (scanf("%lld", &p->populacao) != 1) p->populacao = 0;

            printf("Area (km2, ex: 123.45): ");
            if (scanf("%lf", &p->area) != 1) p->area = 0.0;

            printf("PIB (ex: 1234567.89): ");
            if (scanf("%lf", &p->pib) != 1) p->pib = 0.0;

            printf("Pontos turisticos (inteiro): ");
            if (scanf("%d", &p->pontos_turisticos) != 1) p->pontos_turisticos = 0;

            // limpar o restante da linha para o próximo fgets
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);

            idx++;
            printf("\n");
        }
    }

    printf("=== Cartas cadastradas ===\n\n");
    for (int i = 0; i < idx; ++i) {
        Carta *p = &cartas[i];
        printf("%s - %s\n", p->codigo, p->nome);
        printf("Populacao: %lld\n", p->populacao);
        printf("Area: %.2f\n", p->area);
        printf("PIB: %.2f\n", p->pib);
        printf("Pontos turisticos: %d\n\n", p->pontos_turisticos);
    }
    

    return 0;
}

