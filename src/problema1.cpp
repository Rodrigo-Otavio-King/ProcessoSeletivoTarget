// src/problema1.c
//O Resultado da soma ser� = 91
#include <stdio.h>

#define INDICE 13  // Define o n�mero de elementos a serem somados

int main() {
    int numeros[INDICE];  // Vetor para armazenar os n�meros de 1 at� INDICE
    int SOMA = 0;  // Vari�vel para acumular a soma dos elementos

    // Preencher o vetor com valores de 1 a INDICE
    for (int i = 0; i < INDICE; i++) {
        numeros[i] = i + 1;  // Atribui o valor i+1 ao vetor (1, 2, ..., INDICE)
    }

    // Calcular a soma dos elementos do vetor
    for (int i = 0; i < INDICE; i++) {
        SOMA += numeros[i];  // Acumula a soma dos valores no vetor
    }

    // Exibir o resultado da soma
    printf("SOMA = %d\n", SOMA);

    return 0;
}

