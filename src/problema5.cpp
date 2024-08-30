// src/problema5.c
#include <stdio.h>
#include <locale.h>
#include <string.h>

// Fun��o para inverter uma string
void inverterString(char* str) {
    int inicio = 0;                // �ndice do in�cio da string
    int fim = strlen(str) - 1;     // �ndice do final da string
    char temp;                     // Vari�vel tempor�ria para troca de caracteres

    // Trocar os caracteres do in�cio e do final at� encontrar o meio da string
    while (inicio < fim) {
        // Trocar caracteres
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // Avan�ar os �ndices
        inicio++;
        fim--;
    }
}

int main() {
    // Configura��o de localidade para suportar caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    // Buffer para armazenar a string fornecida pelo usu�rio
    char str[100];

    // Solicitar a entrada do usu�rio
    printf("Digite uma string (m�ximo 99 caracteres): ");
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

