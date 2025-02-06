#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    printf("**Super Trunfo** \n");
    printf("\nPRIMEIRA CARTA\n");
    // Definição de variáveis separadas por cada atributo da cidade.

    char estado, estado2;
    char codigoCard [50], codigoCard2 [50];
    char nomeCidade [50], nomeCidade2 [50];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    float densidadePopulacional, densidadePopulacional2;
    float pib_per_capita, pib_per_capita2;


    // Cadastro da primeira carta:
    
    printf("\nInsira o estado: \n");
    scanf("%c", &estado);

    printf("Insira o Código da Carta: \n");
    scanf("%s", &codigoCard);
    
    printf("Insira o Nome da Cidade: \n"); // N utilizável espaço
    scanf(" %s", &nomeCidade);

    printf("Insira a População: \n");
    scanf("%lu", &populacao);

    printf("Insira a Área: \n");
    scanf("%f", &area);

    printf("Insira o PIB: \n");
    scanf("%f", &pib);

    printf("Insira o Numero de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos);

    //Cadastro da segunda carta:

    printf("\nSEGUNDA CARTA\n");

    printf("\nInsira o estado: \n");
    scanf(" %c", &estado2);

    printf("Insira o Código da Carta: \n");
    scanf("%s", &codigoCard2);
    
    printf("Insira o Nome da Cidade: \n"); // N utilizável espaço
    scanf(" %s", &nomeCidade2);

    printf("Insira a População: \n");
    scanf("%lu", &populacao2);

    printf("Insira a Área: \n");
    scanf("%f", &area2);

    printf("Insira o PIB: \n");
    scanf("%f", &pib2);

    printf("Insira o Numero de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Calculos de densidada populacional e Pib per capita da primeira carta.
    
    densidadePopulacional = populacao / area;

    pib_per_capita = pib / (float) populacao;


    //Calculos de densidada populacional e Pib per capita da segunda carta.

    
    densidadePopulacional2 = populacao2 / area2;

    pib_per_capita2 = pib2 / (float) populacao2;




// Exibição dos dados da primeira carta:
    printf("\nPRIMEIRA CARTA\n");
    printf("\nEstado: %c \n", estado);
    printf("Código da Carta: %s \n", codigoCard);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("Densidade populacional: %.2f pessoas por km² \n", densidadePopulacional);
    printf("PIB: %.2f Bilhões de Reais \n", pib);
    printf("PIB per capita: %.2f Reais \n", pib_per_capita);
    printf("Pontos Turísticos: %d \n", pontosTuristicos);

    // Exibição dos dados da segunda carta:
    printf("\nSegunda CARTA\n");
    printf("\nEstado: %c \n", estado2);
    printf("Código da Carta: %s \n", codigoCard2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("Densidade populacional: %.2f pessoas por km² \n", densidadePopulacional2);
    printf("PIB: %.2f Bilhões de Reais \n", pib2);
    printf("PIB per capita: %.2f Reais \n", pib_per_capita2);
    printf("Pontos Turísticos: %d \n", pontosTuristicos2);

    return 0;
}
