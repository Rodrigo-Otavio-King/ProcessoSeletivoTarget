// src/problema3.c
#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/tree.h>

#define MAX_DIAS 31  // Máximo número de dias no mês

// Função para calcular o menor e o maior valor e a média de faturamento
void calcularFaturamento(double faturamento[], int n, double *menor, double *maior, double *media, int *diasAcimaMedia) {
    double soma = 0;
    *menor = faturamento[0];
    *maior = faturamento[0];
    int diasFaturamento = 0;

    for (int i = 0; i < n; i++) {
        if (faturamento[i] > 0) { // Ignora dias sem faturamento
            soma += faturamento[i];
            diasFaturamento++;
            if (faturamento[i] < *menor) {
                *menor = faturamento[i];
            }
            if (faturamento[i] > *maior) {
                *maior = faturamento[i];
            }
        }
    }

    *media = soma / diasFaturamento;

    *diasAcimaMedia = 0;
    for (int i = 0; i < n; i++) {
        if (faturamento[i] > *media) {
            (*diasAcimaMedia)++;
        }
    }
}

int main() {
    xmlDoc *doc = NULL;
    xmlNode *root_element = NULL;

    // Parse o arquivo XML
    doc = xmlReadFile("faturamento.xml", NULL, 0);
    if (doc == NULL) {
        fprintf(stderr, "Falha ao carregar o arquivo XML.\n");
        return -1;
    }

    root_element = xmlDocGetRootElement(doc);

    double faturamento[MAX_DIAS] = {0};
    int i = 0;

    // Itera sobre os nós do XML e preenche o vetor de faturamento
    for (xmlNode *node = root_element->children; node; node = node->next) {
        if (node->type == XML_ELEMENT_NODE && xmlStrcmp(node->name, (const xmlChar *)"dia") == 0) {
            xmlChar *valor = xmlNodeGetContent(node);
            if (valor) {
                faturamento[i++] = atof((const char *)valor);
                xmlFree(valor);
            }
        }
    }

    xmlFreeDoc(doc);
    xmlCleanupParser();

    double menor, maior, media;
    int diasAcimaMedia;

    // Calcular o menor e o maior valor, a média e o número de dias acima da média
    calcularFaturamento(faturamento, i, &menor, &maior, &media, &diasAcimaMedia);

    // Exibir resultados
    printf("Menor valor de faturamento: %.2f\n", menor);
    printf("Maior valor de faturamento: %.2f\n", maior);
    printf("Média de faturamento: %.2f\n", media);
    printf("Número de dias acima da média: %d\n", diasAcimaMedia);

    return 0;
}

