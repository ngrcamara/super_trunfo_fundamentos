#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    //declaracao e inicializacao de variaveis...
    char estado1 = '\0';
    char codigo_carta1[4] = "";
    char nome_cidade1[100] = "";
    int populacao1 = 0;
    float area1 = 0.0;
    float pib1 = 0.0;
    int pontos_turisticos1 = 0;

    char estado2 = '\0';
    char codigo_carta2[4] = "";
    char nome_cidade2[100] = "";
    int populacao2 = 0;
    float area2 = 0.0;
    float pib2 = 0.0;
    int pontos_turisticos2 = 0;

    //leitura dos dados...
    printf("Informe os dados da carta 1:\n");
    printf("Estado: \n");
    scanf("%c", &estado1);
    printf("Código da Carta: \n");
    scanf("%s", codigo_carta1);
    printf("Nome da Cidade: \n");
    scanf("%*c"); //descarta o newline anterior, senao pula o fgets
    fgets(nome_cidade1, 100, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;
    printf("População: \n");
    scanf("%d", &populacao1);
    printf("Area: \n");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): \n");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    scanf("%*c"); //descarta o newline anterior, senao pula o fgets
    printf("Informe os dados da carta 2:\n");
    printf("Estado: \n");
    scanf("%c", &estado2);
    printf("Código da Carta: \n");
    scanf("%s", codigo_carta2);
    printf("Nome da Cidade: \n");
    scanf("%*c"); //descarta o newline anterior, senao pula o fgets
    fgets(nome_cidade2, 100, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Area: \n");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos2);
    printf("\n\n");

    //exibicao dos dados...
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);


    return 0;
}
