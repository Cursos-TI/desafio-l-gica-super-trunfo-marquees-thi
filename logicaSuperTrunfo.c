#include <stdio.h>

// Criando as cartas do super trunfo

int main(){
    // Variáveis da primeira carta
    char estado_1[1], cidade_1[20];
    char code_1[4]; // Refere-se ao código das cartas
    unsigned long int populacao_1;
    float area_1, pib_1, densidade_1;
    int pontos_turisticos_1;
    float pib_cap_1; // Refere-se ao PIB per capita da cidade
    float super_poder1; // Refere-se ao Super Poder da carta

    // Variáveis da segunda carta
    char estado_2[1], code_2[4], cidade_2[20];
    unsigned long int populacao_2;
    float area_2, pib_2, densidade_2, pib_cap_2, super_poder2;
    int pontos_turisticos_2;
    

    // Guardar informações da primeira carta
    printf("Preenchendo as informações da primeira carta\n");
    printf("Digite um dos oito estados (A-H): \n");
    scanf("%s", &estado_1);
    printf("Digite um código para a carta (ex: A01, B03): \n");
    scanf("%s", &code_1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade_1);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_1);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area_1);
    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_1);
    densidade_1 = populacao_1 / area_1;
    pib_cap_1 = pib_1 / populacao_1;
    super_poder1 = (populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + pib_cap_1) / densidade_1;

    // Guardar informações da segunda carta
    printf("\nPreenchendo as informações da segunda carta \n");
    printf("Digite um dos oito estados (A-H): \n");
    scanf("%s", &estado_2);
    printf("Digite um código para a carta (ex: A01, B03): \n");
    scanf("%s", &code_2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade_2);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_2);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area_2);
    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos_2);
    densidade_2 = populacao_2 / area_2;
    pib_cap_2 = pib_2 / populacao_2;
    super_poder2 = (populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pib_cap_2) / densidade_2;

    // Comparação das cartas
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", cidade_1, populacao_1);
    printf("Carta 1 - %s: %d\n", cidade_2, populacao_2);
    if(populacao_1 > populacao_2){
        printf("%s venceu!\n", cidade_1);
    }
    else{
        printf("%s venceu!\n", cidade_2);
    }
}