#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    printf("**Super Trunfo** \n");
    // Definição de variáveis separadas por cada atributo da cidade.

    char estado;
    char codigoCard [50];
    char nomeCidade [50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pib_per_capita;


    // Cadastro das Cartas:
    
    printf("Insira o estado: \n");
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

    //Calculos de densidada populacional e Pib per capita.
    
    densidadePopulacional = populacao / area;

    pib_per_capita = pib / (float) populacao;





    // Exibição dos Dados das Cartas:
    
    printf("Estado: %c \n", estado);
    printf("Código da Carta: %s \n", codigoCard);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("Densidade populacional: %.2f pessoas por km² \n", densidadePopulacional);
    printf("PIB: %.2f Bilhões de Reais \n", pib);
    printf("PIB per capita: %.2f Reais \n", pib_per_capita);
    printf("Pontos Turísticos: %d \n", pontosTuristicos);

    return 0;
}
