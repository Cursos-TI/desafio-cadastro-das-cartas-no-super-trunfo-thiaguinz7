#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
//Variaveis:

char estado[50];
char carta[50];
char cidade[50];
float populacao;
float tamanho;
float pib;
int turisticos;
char estado2[50];
char carta2[50];
char cidade2[50];
float populacao2;
float tamanho2;
float pib2;
int turisticos2;

//carta número1:

// INFORMACOES DA 1 CARTA:

printf("insira o estado:\n");
scanf("%s" , estado);
printf("insira o codigo da carta:\n");
scanf("%s" , carta);
printf("digite o nome da cidade;\n");
scanf("%[^\n]" , cidade);
printf("digite a populacao:\n");
scanf("%f" , &populacao);
printf("digite o tamanho:\n");
scanf("%f" , &tamanho);
printf("informe o pib:\n");
scanf("%f" , &pib);
printf("informe a quantidade de pontos turisticos:\n");
scanf("%d" , &turisticos);

//carta numero2:

//  INFORMACOES DA 2 CARTA:

printf("insira o estado:\n");
scanf("%s", estado2);
printf("insira o codigo da carta:\n");
scanf("%s", carta2);
printf("digite o nome da cidade:\n");
scanf(" %[^\n]", cidade2);
printf("digite a populcao:\n");
scanf("%f", &populacao2);
printf("digite o tamanho da cidade:\n");
scanf("%f", &tamanho2);
printf("informe o PIB:\n");
scanf("%f", &pib2);
printf("informe a quantidade pontos turisticos:\n");
scanf("%d", &turisticos2);

// EIXBINDO AS INFORMACOES:

printf("----- CARTA1 -------\n");
printf("estado: %s\n" , estado);
printf("codigo: %s\n" , carta);
printf("cidade: %s\n" , cidade);
printf("poplacao: %.2f\n" , populacao);
printf("tamanho: %.2f km²\n" , tamanho);
printf("PIB: %.f\n" , pib);
printf("numero de pontos turisticos: %d\n" , turisticos);

printf("-----------CARTA 2----------\n");
printf("estado: %s\n", estado2);
printf("codigo: %s\n", carta2);
printf("cidade: %s\n", cidade2);
printf("populacao: %.2f\n", populacao2);
printf("tamanho: %.2f Km²\n", tamanho2);
printf("PIB: %2.f bilhoes de reais\n", pib2);
printf("numero de pontos turisticos: %d\n", turisticos2);


return 0;





}
