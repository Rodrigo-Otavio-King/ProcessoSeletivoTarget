// src/problema5.c
#include <stdio.h>
#include <locale.h>
#include <string.h>

// Função para inverter uma string
void inverterString(char* str) {
    int inicio = 0;                // Índice do início da string
    int fim = strlen(str) - 1;     // Índice do final da string
    char temp;                     // Variável temporária para troca de caracteres

    // Trocar os caracteres do início e do final até encontrar o meio da string
    while (inicio < fim) {
        // Trocar caracteres
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // Avançar os índices
        inicio++;
        fim--;
    }
}

int main() {
    // Configuração de localidade para suportar caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    // Buffer para armazenar a string fornecida pelo usuário
    char str[100];

    // Solicitar a entrada do usuário
    printf("Digite uma string (máximo 99 caracteres): ");
    fgets(str, sizeof(str), stdin);

    // Remover o caractere de nova linha, se presente
    size_t length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    // Inverter a string
    inverterString(str);

    // Exibir a string invertida
    printf("String invertida: %s\n", str);

    return 0;
}

