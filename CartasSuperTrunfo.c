#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Thiago barros santos

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

// Primeira carta
char estado[50];
char codigo[50];
char cidade[50];
float populacao;
float tamanho;
float pib;
int turisticos;

// Segunda carta
char estado2[50];
char codigo2[50];
char cidade2[50];
float populacao2;
float tamanho2;
float pib2;
int turisticos2;

//carta número1:

// INFORMACOES DA 1 CARTA:

printf("insira o estado:");
scanf("%s" , estado);

printf("insira o codigo da carta:");
scanf("%s" , codigo);

printf("digite o nome da cidade;");
scanf("%[^\n]" , cidade);

printf("digite a populacao:");
scanf("%f" , &populacao);

printf("digite o tamanho:");
scanf("%f" , &tamanho);

printf("informe o pib:");
scanf("%f" , &pib);

printf("informe a quantidade de pontos turisticos:");
scanf("%d" , &turisticos);

printf("\n");

//carta numero2:

//  INFORMACOES DA 2 CARTA:

printf("insira o estado:");
scanf("%s", estado2);

printf("insira o codigo da carta:");
scanf("%s", codigo2);

printf("digite o nome da cidade:");
scanf(" %[^\n]", cidade2);

printf("digite a populcao:");
scanf("%f", &populacao2);

printf("digite o tamanho da cidade:");
scanf("%f", &tamanho2);

printf("informe o PIB:");
scanf("%f", &pib2);

printf("informe a quantidade pontos turisticos:");
scanf("%d", &turisticos2);

printf("\n");

// adicionar depois de gravadas
float densidade1 = populacao / tamanho;
float densidade2 = populacao2 / tamanho2;

float PIB_per_capital = (pib *1000000000) / populacao;
float PIB_per_capital2 = (pib2 *1000000000) / populacao2;

// EIXBINDO AS INFORMACOES:

printf("----- CARTA1 -------\n");
printf("estado: %s\n" , estado);
printf("codigo: %s\n" , codigo);
printf("cidade: %s\n" , cidade);
printf("poplacao: %.2f\n" , populacao);
printf("tamanho: %.2f km²\n" , tamanho);
printf("PIB: %.f\n" , pib);
printf("numero de pontos turisticos: %d\n" , turisticos);
printf("Densidade populacao: %2.f\n" , densidade1);
printf("PIB per capital: %.2f\n" , PIB_per_capital);

printf("\n");

printf("-----------CARTA 2----------\n");
printf("estado: %s\n", estado2);
printf("codigo: %s\n", codigo2);
printf("cidade: %s\n", cidade2);
printf("populacao: %.2f\n", populacao2);
printf("tamanho: %.2f Km²\n", tamanho2);
printf("PIB: %2.f bilhoes de reais\n", pib2);
printf("numero de pontos turisticos: %d\n", turisticos2);
printf("Densidade populacao: %2.f\n" , densidade2);
printf("PIB per capital: %.2f\n" , PIB_per_capital2);

printf("\n");

return 0;





}
