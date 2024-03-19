#include <stdio.h>
#include <string.h>

#define MAX_CANDIDATOS 10
#define MAX_SECOES 10
#define TAM_NOME 30

int main() {
    char candidatos[MAX_CANDIDATOS][TAM_NOME];
    int votos[MAX_CANDIDATOS][MAX_SECOES];
    int NCAND, NSEC;

    printf("Entre o número de candidatos: ");
    scanf("%d", &NCAND);
    printf("Entre o número de seções eleitorais: ");
    scanf("%d", &NSEC);

    // Requisitar e armazenar os nomes dos candidatos
    for (int i = 0; i < NCAND; i++) {
        printf("Entre o nome do candidato %d: ", i+1);
        scanf("%s", candidatos[i]);
    }

    // Requisitar e armazenar a quantidade de votos de cada candidato em cada seção eleitoral
    for (int i = 0; i < NCAND; i++) {
        for (int j = 0; j < NSEC; j++) {
            printf("Entre a quantidade de votos de %s na seção %d: ", candidatos[i], j);
            scanf("%d", &votos[i][j]);
        }
    }

    // Calcular e exibir o número total de votos de cada seção eleitoral
    for (int j = 0; j < NSEC; j++) {
        int total_secao = 0;
        for (int i = 0; i < NCAND; i++) {
            total_secao += votos[i][j];
        }
        printf("Total de votos na seção %d: %d\n", j, total_secao);
    }

    // Calcular e exibir o número total de votos de cada candidato
    for (int i = 0; i < NCAND; i++) {
        int total_candidato = 0;
        for (int j = 0; j < NSEC; j++) {
            total_candidato += votos[i][j];
        }
        printf("Total de votos de %s: %d\n", candidatos[i], total_candidato);
    }

    return 0;
}
