// src/problema2.c
#include <stdio.h>
#include <locale.h>

// Função para verificar se um número pertence à sequência de Fibonacci
int pertenceFibonacci(int numero) {
    int a = 0;  // Primeiro número da sequência de Fibonacci
    int b = 1;  // Segundo número da sequência de Fibonacci
    int temp;   // Variável auxiliar para troca de valores

    // Caso base: 0 e 1 pertencem à sequência de Fibonacci
    if (numero == 0 || numero == 1) {
        return 1;  // Retorna 1 (verdadeiro) se o número for 0 ou 1
    }

    // Gera os números de Fibonacci até que o número b seja maior ou igual ao número informado
    while (b < numero) {
        temp = a;  // Armazena o valor atual de a
        a = b;     // Atualiza a para o próximo número da sequência
        b = temp + b; // Calcula o próximo número da sequência como a soma dos dois números anteriores
    }

    // Verifica se o número informado é igual ao número da sequência atual (b)
    return (b == numero); // Retorna 1 se o número pertence à sequência, 0 caso contrário
}

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura a localização para suportar caracteres especiais em português

    int numero; // Variável para armazenar o número informado pelo usuário

    // Solicita ao usuário que informe um número
    printf("Digite um número: ");
    scanf("%d", &numero); // Lê o número informado pelo usuário

    // Verifica se o número pertence à sequência de Fibonacci e exibe o resultado
    if (pertenceFibonacci(numero)) {
        printf("%d pertence à sequência de Fibonacci.\n", numero); // Mensagem se o número pertence à sequência
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", numero); // Mensagem se o número não pertence à sequência
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

