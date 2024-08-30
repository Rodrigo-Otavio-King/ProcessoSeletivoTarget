// src/problema2.c
#include <stdio.h>
#include <locale.h>

// Fun��o para verificar se um n�mero pertence � sequ�ncia de Fibonacci
int pertenceFibonacci(int numero) {
    int a = 0;  // Primeiro n�mero da sequ�ncia de Fibonacci
    int b = 1;  // Segundo n�mero da sequ�ncia de Fibonacci
    int temp;   // Vari�vel auxiliar para troca de valores

    // Caso base: 0 e 1 pertencem � sequ�ncia de Fibonacci
    if (numero == 0 || numero == 1) {
        return 1;  // Retorna 1 (verdadeiro) se o n�mero for 0 ou 1
    }

    // Gera os n�meros de Fibonacci at� que o n�mero b seja maior ou igual ao n�mero informado
    while (b < numero) {
        temp = a;  // Armazena o valor atual de a
        a = b;     // Atualiza a para o pr�ximo n�mero da sequ�ncia
        b = temp + b; // Calcula o pr�ximo n�mero da sequ�ncia como a soma dos dois n�meros anteriores
    }

    // Verifica se o n�mero informado � igual ao n�mero da sequ�ncia atual (b)
    return (b == numero); // Retorna 1 se o n�mero pertence � sequ�ncia, 0 caso contr�rio
}

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura a localiza��o para suportar caracteres especiais em portugu�s

    int numero; // Vari�vel para armazenar o n�mero informado pelo usu�rio

    // Solicita ao usu�rio que informe um n�mero
    printf("Digite um n�mero: ");
    scanf("%d", &numero); // L� o n�mero informado pelo usu�rio

    // Verifica se o n�mero pertence � sequ�ncia de Fibonacci e exibe o resultado
    if (pertenceFibonacci(numero)) {
        printf("%d pertence � sequ�ncia de Fibonacci.\n", numero); // Mensagem se o n�mero pertence � sequ�ncia
    } else {
        printf("%d n�o pertence � sequ�ncia de Fibonacci.\n", numero); // Mensagem se o n�mero n�o pertence � sequ�ncia
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

