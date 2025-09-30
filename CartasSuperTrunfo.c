#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // carta1
  char estado[99];
  char codigo[99];
  char cidade[99];
  int populacao;
  float area;
  float pib;
  int pontost;
  // carta 2
  char estado2[99];
  char codigo2[99];
  char cidade2[99];
  int populacao2;
  float area2;
  float pib2;
  int pontost2;
  // Área para entrada de dados
  // COLETANDO DADOS DA CARTA 1
  printf("\nColetando dados da carta 1\n");

  printf("Digite seu estado: ");
  scanf("%s", &estado);

  printf("digite seu código: ");
  scanf("%s", &codigo);

  printf("Digite sua cidade: ");
  scanf("%s", cidade);

  printf("Digite sua populacao: ");
  scanf("%d", &populacao);

  printf("Digite Sua area: ");
  scanf("%f", &area);

  printf("Digite seu pib: ");
  scanf("%f", &pib);

  printf("Digite quantos pontos turiscos tem: ");
  scanf("%d", &pontost);

  getchar(); //Limpar o \n do buffer

  // COLETANDO DADOS DA CARTA 2
  printf("\nColetando dados da carta 2\n");

  printf("Digite seu estado: ");
  scanf("%s", &estado2);

  printf("digite seu código: ");
  scanf("%s", &codigo2);

  printf("Digite sua cidade: ");
  scanf("%s", cidade2);

  printf("Digite sua populacao: ");
  scanf("%d", &populacao2);

  printf("Digite Sua area: ");
  scanf("%f", &area2);

  printf("Digite seu pib: ");
  scanf("%f", &pib2);

  printf("Digite quantos pontos turiscos tem: ");
  scanf("%d", &pontost2);

  // Área para exibição dos dados da cidade
  // carta 1
  printf("\n-----CARTA 1-------\n");
  printf("Estado: %s\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("Populacao: %d de Habitantes\n", populacao);
  printf("Area: %f Km²\n", area);
  printf("Pib: %f Bilhoes de Reais\n", pib);
  printf("Numeros de pontos turisticos: %d\n", pontost);

  // carta 2
  printf("\n-----CARTA 2-------\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d de Habitantes\n", populacao2);
  printf("Area: %f Km²\n", area2);
  printf("Pib: %f Bilhoes de Reais\n", pib2);
  printf("Numeros de pontos turisticos: %d\n", pontost2);

  return 0;
}
