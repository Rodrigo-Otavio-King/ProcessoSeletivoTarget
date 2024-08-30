# Desafio-Target
Desafios propostos em um processo seletivo de vaga para a empresa Target Sistemas.
Desafio Target - Repositório de Código

Bem-vindo ao repositório do Desafio Target! Este repositório contém soluções para uma série de problemas de programação em C. Abaixo estão as instruções detalhadas para compilar e executar os programas, bem como a configuração necessária para o problema que utiliza XML.
Criado pelo software DevC++, utilizando a linguagem C.


Estrutura do Repositório
------------------------

A estrutura do repositório é a seguinte:

Desafio-Target/
├── src/
│   ├── problema1.c
│   ├── problema2.c
│   ├── problema3.c
│   ├── problema4.c
│   └── problema5.c
├── data/
│   └── faturamento.xml
└── README.txt

Descrição dos Arquivos
----------------------

- src/problema1.c: Calcula a soma dos números de 1 até um valor definido. Utiliza vetores para armazenar e somar os valores.
- src/problema2.c: Verifica se um número pertence à sequência de Fibonacci. Implementa a lógica de Fibonacci e verifica a presença do número.
- src/problema3.c: Analisa dados de faturamento diário em formato XML. Calcula o menor e o maior valor de faturamento e o número de dias com faturamento superior à média mensal.
- src/problema4.c: Calcula o percentual de representação de faturamento por estado.
- src/problema5.c: Inverte os caracteres de uma string fornecida pelo usuário.

Instruções de Compilação e Execução
-----------------------------------

Compilação dos Programas em C
Para compilar e executar os programas, você pode usar um compilador de C como gcc. Aqui estão os comandos para compilar cada programa:

gcc src/problema1.c -o problema1
gcc src/problema2.c -o problema2
gcc src/problema3.c -o problema3 -lxml2
gcc src/problema4.c -o problema4
gcc src/problema5.c -o problema5

Execução dos Programas
Depois de compilar, você pode executar os programas usando os seguintes comandos:

./problema1
./problema2
./problema3
./problema4
./problema5

Configuração para o Problema 3 (Faturamento Diário em XML)
---------------------------------------------------------

Para rodar o programa problema3.c, que utiliza XML para processar dados de faturamento, você precisa instalar a biblioteca libxml2. Esta biblioteca é necessária para manipular e ler arquivos XML em C.

Instalação da Biblioteca libxml2

No Ubuntu/Debian:

sudo apt-get update
sudo apt-get install libxml2 libxml2-dev

No macOS:

brew install libxml2

No Windows:

1. Baixe o instalador da biblioteca libxml2 a partir do site oficial (http://xmlsoft.org/sources/win32/).
2. Siga as instruções do instalador para adicionar libxml2 ao seu sistema.


Obrigado pela oportunidade!
Atenciosamente,
Rodrigo Otavio King

:-)

