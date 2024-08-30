// src/problema4.c
#include <stdio.h>
#include <locale.h>

#define NUM_ESTADOS 5  // Número total de estados e categorias

int main() {
    // Configuração de localidade para suportar caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    // Vetor para armazenar os valores de faturamento por estado
    double faturamento[NUM_ESTADOS] = {
        67836.43,  // SP
        36678.66,  // RJ
        29229.88,  // MG
        27165.48,  // ES
        19849.53   // Outros
    };

    // Vetor com os nomes dos estados
    const char* estados[NUM_ESTADOS] = {
        "SP",
        "RJ",
        "MG",
        "ES",
        "Outros"
    };

    double total_faturamento = 0.0;
    double percentual[NUM_ESTADOS];

    // Calcular o total de faturamento
    for (int i = 0; i < NUM_ESTADOS; i++) {
        total_faturamento += faturamento[i];
    }

    // Calcular o percentual de representação de cada estado
    for (int i = 0; i < NUM_ESTADOS; i++) {
        percentual[i] = (faturamento[i] / total_faturamento) * 100;
    }

    // Exibir o resultado
    printf("Percentual de representação dos estados no faturamento mensal:\n");
    for (int i = 0; i < NUM_ESTADOS; i++) {
        printf("Estado %s: %.2f%%\n", estados[i], percentual[i]);
    }

    return 0;
}

