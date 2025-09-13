#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Thiago barros santos

struct Carta {
    char estado[30];         
    char codigo[50];          
    char nome[50];           
    unsigned long int populacao;
    float area;
    float super_poder;
    float pibpercapital;
    float densidade;
    double pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
   
    printf("Cadastro da primeira carta:\n");
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Codigo: ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome); 
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area (km²):");
    scanf("%f", &carta1.area);
    printf("PIB:");
    scanf( "%lf", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n");

  
    printf("Cadastro da segunda carta:\n");
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("Codigo: ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%lf", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;

    pibpercapita1 = (carta1.pib * 1000000000) / carta1.populacao; // converte bilhões para reais
    pibpercapita2 = (carta2.pib * 1000000000) / carta2.populacao;

    printf("\n--- Dados cadastrados ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("Populacao: %ld\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f \n", carta1.pib);
    printf("Numero de pontos turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("Populacao: %ld\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f \n", carta2.pib);
    printf("Numero de pontos turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

     carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos + carta1.pibpercapital + densidade1;
     carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos + carta2.pibpercapital + densidade2;
   
    printf("\n --- Comparação de Cartas ---\n");

    printf("poulacao: Carta %d venceu !\n, carta1.populacao > carta2.populacao ? 1 : 2");
    printf("area: carta %d venceu !\n, carta1.area > carta2.area ? 1 : 2");
    printf("pib: carta %d venceu !\n, carta1.pib > carta2.pib ? 1 : 2");
    printf("pontos_turisticos: carta%d venceu !\n, carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 2");
    printf("pibpercapital: carta %d venceu !\n, carta1.pibpercapital > carta2.pibpercapital ? 1 : 2");
    printf("densidade: carta %d venceu !\n, carta1.densidade >  carta2.densidade ? 1 : 2");
    printf("super_poder: carta %d venceu !\n carta1.super_poder > carta2.super_poder ? 1 : 2");

    
    return 0;




}
