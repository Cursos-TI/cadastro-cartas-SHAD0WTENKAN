#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1; 
    float percapita1; 
    float superpoder1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float percapita2;
    float superpoder2;

  // Área para entrada de dados

   // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    //Calculos Carta 1
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + percapita1 + ( 1 / densidade1);

//===============================================================================================

     // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    //Calculos Carta 2
    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + percapita2 + (1 / densidade2);

  // Área para exibição dos dados da cidade

   // Exibição dos dados da Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);
    printf("Super poder: %.2f\n", superpoder1);

    // Exibição dos dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
    printf("Super poder: %.2f\n", superpoder2);

    //Comparação
    int resultadopopulacao = populacao1 > populacao2;
    int resultadoarea = area1 > area2;
    int resultadopib = pib1 > pib2;
    int resultadospontos = pontos1 > pontos2;
    int resultadodensidade = densidade1 < densidade2; // menor vence
    int resultadopercapita = percapita1 > percapita2;
    int resultadosuperpoder = superpoder1 > superpoder2;

    // Resultado das comparações
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta 1 venceu (%d)\n", resultadopopulacao);
    printf("Area: Carta 1 venceu (%d)\n", resultadoarea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadopib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", resultadospontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadodensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadopercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadosuperpoder);

return 0;
} 