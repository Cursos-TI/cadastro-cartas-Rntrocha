#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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

    superPoder1 = (float)(populacao + area + pib + pibpercapita + DensidadePopulacional + pontost);
    superPoder2 = (float)(populacao2 + area2 + pib2 + pibpercapita2 + DensidadePopulacional2 + pontost2);

    int resultado1, resultado2;
    char primeitoatr, segundoatr;

    printf("Bem vindo ao Jogo \n");
    printf("Escolha o Primeiro atributo: \n");
    printf("A. area: \n");
    printf("B. Pib: \n");
    printf("C. Pontos Turisticos: \n");
    printf("D. População: \n");
    printf("E. Densidade Populacional: \n");
    printf("F. Pib percapta: \n");
    printf("G. Super Poderes: \n");
    printf("\n");

    printf("Escolha qual quer comparar : \n");
    scanf("%c", &primeitoatr);

    switch (primeitoatr)
    {
    case 'A':
    case 'a':
        printf("Você escolher a opção ÁREA : \n");
        resultado1 = area > area2 ? 1 : 0; // se a área 1 for maior que área 2, 1 para verdadeiro e 0 para falso
        break;
    case 'B':
    case 'b':
        printf("Você escolher a opção PIB : \n");
        resultado1 = pib > pib2 ? 1 : 0;
        break;
    case 'C':
    case 'c':
        printf("Você escolher a opção PONTOS TURISTICOS : \n");
        resultado1 = pontost > pontost2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolher a opção POPULAÇÃO : \n");
        resultado1 = populacao > populacao2 ? 1 : 0;
        break;
    case 'E':
    case 'e':
        printf("Você escolher a opção DENSIDADE POPULACIONAL : \n");
        resultado1 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
        break;
    case 'F':
    case 'f':
        printf("Você escolher a opção PIB PERCAPTA : \n");
        resultado1 = pibpercapita > pibpercapita2 ? 1 : 0;
        break;
    case 'G':
    case 'g':
        printf("Você escolher a opção SUPER PODERES : \n");
        resultado1 = superPoder1 > superPoder2 ? 1 : 0;
        break;

    default:
        printf("Opção inválida !!! \n");
        break;
    }

    printf("Escolha o Segundo atributo: \n");
    printf("Atenção : Você deve escolher um atributo diferente do Primeiro . \n");
    printf("A. area: \n");
    printf("B. Pib: \n");
    printf("C. Pontos Turisticos: \n");
    printf("D. População: \n");
    printf("E. Densidade Populacional: \n");
    printf("F. Pib percapta: \n");
    printf("G. Super Poderes: \n");
    printf("\n");

    printf("Escolha qual quer comparar : \n");
    scanf("%c", &segundoatr);

    if (primeitoatr == segundoatr)
        printf("Você escolheu o mesmo atributo, escolha outro da próxima vez! \n ");
    else
        switch (segundoatr)
        {
        case 'A':
        case 'a':
            printf("Você escolher a opção ÁREA : \n");
            resultado2 = area > area2 ? 1 : 0;
            break;
        case 'B':
        case 'b':
            printf("Você escolher a opção PIB : \n");
            resultado2 = pib > pib2 ? 1 : 0;
            break;
        case 'C':
        case 'c':
            printf("Você escolher a opção PONTOS TURISTICOS : \n");
            resultado2 = pontost > pontost2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolher a opção POPULAÇÃO : \n");
            resultado2 = populacao > populacao2 ? 1 : 0;
            break;
        case 'E':
        case 'e':
            printf("Você escolher a opção DENSIDADE POPULACIONAL : \n");
            resultado2 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
            break;
        case 'F':
        case 'f':
            printf("Você escolher a opção PIB PERCAPTA : \n");
            resultado2 = pibpercapita > pibpercapita2 ? 1 : 0;
            break;
        case 'G':
        case 'g':
            printf("Você escolher a opção SUPER PODERES : \n");
            resultado2 = superPoder1 > superPoder2 ? 1 : 0;
            break;

        default:
            printf("Opção inválida !!! \n");
            break;
        }

        if (resultado1 && resultado2)
            printf("Parabéns, você ganhou ! \n");
        else if (resultado1 != resultado2)
            printf("Empatou \n");
        else
            printf("Infelizmente você perdeu ! \n");

    return 0;
}