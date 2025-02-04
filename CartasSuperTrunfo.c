#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("**Super Trunfo** \n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigoCard [50];
    char nomeCidade [50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o estado: \n");
    scanf("%c", &estado);

    printf("Insira o Código da Carta: \n");
    scanf("%s", &codigoCard);
    
    printf("Insira o Nome da Cidade: \n");
    scanf(" %s", &nomeCidade);

    printf("Insira a População: \n");
    scanf("%d", &populacao);

    printf("Insira a Área: \n");
    scanf("%.f", &area);

    printf("Insira o PIB: \n");
    scanf("%.f", &pib);

    printf("Insira o Numero de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %c \n", estado);
    printf("Código da Carta: %s \n", codigoCard);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.6f \n", area);
    printf("PIB: %.5f \n", pib);
    printf("Pontos Turísticos: %d \n", pontosTuristicos);

    return 0;
}
