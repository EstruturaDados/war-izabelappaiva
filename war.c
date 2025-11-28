#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5
#define TAM_STRING 50

typedef struct {
    char nome[TAM_STRING];
    char cor[TAM_STRING];
    int tropas;
} Territorio;

int main() {
    Territorio mapa[MAX_TERRITORIOS];
    int i;

    printf("=== Cadastro de Territórios ===\n");

    for (i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\n--- Território %d ---\n", i + 1);

        printf("Nome do território: ");
        fgets(mapa[i].nome, TAM_STRING, stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0'; // remover \n

        printf("Cor do exército: ");
        fgets(mapa[i].cor, TAM_STRING, stdin);
        mapa[i].cor[strcspn(mapa[i].cor, "\n")] = '\0';

        printf("Número de tropas: ");
        scanf("%d", &mapa[i].tropas);

        getchar(); // limpa o \n deixado pelo scanf
    }

    printf("\n\n=== Estado Atual do Mapa ===\n");
    for (i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\nTerritório %d\n", i + 1);
        printf("Nome: %s\n", mapa[i].nome);
        printf("Exército: %s\n", mapa[i].cor);
        printf("Tropas: %d\n", mapa[i].tropas);
    }

    return 0;
}