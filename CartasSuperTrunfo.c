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
  unsigned long int populacao;
  float area;
  float pib;
  int pontost;
  float DensidadePopulacional;
  float pibpercapita;
  float superPoder1;
  // carta 2
  char estado2[99];
  char codigo2[99];
  char cidade2[99];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontost2;
  float DensidadePopulacional2;
  float pibpercapita2;
  float superPoder2;
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
  scanf("%lu", &populacao);

  printf("Digite Sua area: ");
  scanf("%f", &area);

  printf("Digite seu pib: ");
  scanf("%f", &pib);

  printf("Digite quantos pontos turiscos tem: ");
  scanf("%d", &pontost);

  DensidadePopulacional = area / populacao;
  pibpercapita = pib / populacao;

  getchar(); // Limpar o \n do buffer

  // COLETANDO DADOS DA CARTA 2
  printf("\nColetando dados da carta 2\n");

  printf("Digite seu estado: ");
  scanf("%s", &estado2);

  printf("digite seu código: ");
  scanf("%s", &codigo2);

  printf("Digite sua cidade: ");
  scanf("%s", cidade2);

  printf("Digite sua populacao: ");
  scanf("%lu", &populacao2);

  printf("Digite Sua area: ");
  scanf("%f", &area2);

  printf("Digite seu pib: ");
  scanf("%f", &pib2);

  printf("Digite quantos pontos turiscos tem: ");
  scanf("%d", &pontost2);

  DensidadePopulacional2 = area2 / populacao2;
  pibpercapita2 = pib2 / populacao2;

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
  printf("Desidade Populacional: %.2f hab/km²\n", DensidadePopulacional);
  printf("PIB per Capita: %.2f Reais\n", pibpercapita);
  printf("O Super poder é: %.8f ", superPoder1);

  // carta 2
  printf("\n-----CARTA 2-------\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d de Habitantes\n", populacao2);
  printf("Area: %f Km²\n", area2);
  printf("Pib: %f Bilhoes de Reais\n", pib2);
  printf("Numeros de pontos turisticos: %d\n", pontost2);
  printf("Desidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
  printf("PIB per Capita: %.2f Reais\n", pibpercapita2);
  printf("O Super poder é: %.8f ", superPoder2);

  superPoder1 = (float)(populacao + area + pib + pibpercapita + DensidadePopulacional + pontost);
  superPoder2 = (float)(populacao2 + area2 + pib2 + pibpercapita2 + DensidadePopulacional2 + pontost2);

  /*printf("****Comparação de cartas****\n");
  printf("População: %d \n", populacao > populacao2);
  printf("Área: %d \n", area > area2);
  printf("PIB: %d \n", pib > pib2);
  printf("Pontos Turísticos: %d \n", pontost > pontost2);
  printf("Densidade Populacional: %d \n", DensidadePopulacional < DensidadePopulacional2);
  printf("PIB per Capita: %d \n", pibpercapita > pibpercapita2);
  printf("Super Poder: %d \n", superPoder1 > superPoder2);*/


  if (populacao > populacao2)
    printf("A População da carta 1 Venceu \n");
  else
    printf("A População da carta 2 venceu \n");

  if (area > area2)
    printf("A area da carta 1 Venceu \n");
  else
    printf("A area da carta 2 venceu \n");

  if (pib > pib2)
    printf("O pib da carta 1 Venceu \n");
  else
    printf("O pib da carta 2 venceu \n");

  if (pontost > pontost2)
    printf("Os pontos da carta 1 Venceu \n");
  else
    printf("Os pontos da carta 2 venceu \n");

  if (DensidadePopulacional < DensidadePopulacional2)
    printf("A Densidade da carta 1 Venceu \n");
  else
    printf("A Densidade da carta 2 venceu \n");

  if (pibpercapita > pibpercapita2)
    printf("O pibpercapto da carta 1 Venceu \n");
  else
    printf("O pibpercapto da carta 2 venceu \n");

  if (superPoder1 > superPoder2)
    printf("O superPoder da carta 1 Venceu \n");
  else
    printf("O superPoder da carta 2 venceu \n");



  return 0;
}
