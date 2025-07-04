#include <stdio.h>

int main(){
    // Váriaveis dos países
    char nome1[20] = "Belize";
    int populacao1 = 411106; 
    float area1 = 22.966;
    float pib1 = 3.067;
    int pontos_turisticos1 = 12;
    float densidade_demografica1 = 19.1;

    char nome2[20] = "Nicaragua";
    int populacao2 = 6359689; 
    float area2 = 129.494;
    float pib2 = 51.022;
    int pontos_turisticos2 = 8;
    float densidade_demografica2 = 39;

    int opcao; // Referente às opções do menu
    int atributo1, atributo2; // Referente às opções do menu de comparação de atributos
    int resultado1, resultado2, variavel;

    printf("Seja bem vindo(a) ao jogo Super Trunfo!\n");
    printf("1. Regra do jogo.\n");
    printf("2. Exibir as cartas.\n"); // Não sei se isso deveria existir
    printf("3. Comparar atributos.\n");
    printf("Digite a opção desejada (1-3): ");
    scanf("%d", &opcao);

    switch(opcao){
    case 1: // Regra do jogo
        printf("\nA carta com os maiores valores nos atributos escolhidos, vence (exceto Densidade Demográfica).");
        break;
    case 2: // Informações das cartas
        // Informações da Carta 1
        printf("\nInformações da Carta 1\n");
        printf("Nome do país: %s \n", nome1);
        printf("População: %d \n", populacao1);
        printf("Área: %.3f km²\n", area1);
        printf("PIB (em bilhões): %.3f \n", pib1);
        printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);
        printf("Densidade Demográfica: %.2f \n", densidade_demografica1);

        // Informações da Carta 2
        printf("\nInformações da Carta 2\n");
        printf("Nome do país: %s \n", nome2);
        printf("População: %d \n", populacao2);
        printf("Área: %.3f km²\n", area2);
        printf("PIB (em bilhões): %.3f \n", pib2);
        printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
        printf("Densidade Demográfica: %.2f \n", densidade_demografica2);
        break;
    
    case 3: // Comparação de atributos
        printf("\nLista de atributos: \n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("Digite o primeiro atributo que deseja comparar (1-5): \n");
        scanf("%d", &atributo1);
        
        switch(atributo1){
        case 1: // População atributo1
            resultado1 = populacao1 > populacao2 ? resultado1 += 1 : 0;
            break;
            
        case 2: // Área atributo1
            resultado1 = area1 > area2 ? resultado1 += 1 : 0;
            break;
            
        case 3: // Pib atributo1
            resultado1 = pib1 > pib2 ? resultado1 += 1 : 0;
            break;
            
        case 4: // Pontos turísticos atributo1
            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? resultado1 += 1 : 0;
            break;
            
        case 5: // Densidade demográfica atributo1
            resultado1 = densidade_demografica1 < densidade_demografica2 ? resultado1 += 1 : 0;
            break;
        }

        printf("Digite o segundo atributo que deseja comparar (1-5): \n");
        scanf("%d", &atributo2);
        if(atributo2 == atributo1){
            printf("Opção já escolhida préviamente.\n");
            break;
        }
        else{
            switch(atributo2){
            case 1: // População atributo2
                resultado2 = populacao1 > populacao2 ? resultado2 += 1 : 0;
                break;
                
            case 2: // Área atributo1
                resultado2 = area1 > area2 ? resultado2 += 1 : 0;
                break;
                
            case 3: // Pib atributo1
                resultado2 = pib1 > pib2 ? resultado2 += 1 : 0;
                break;
                
            case 4: // Pontos turísticos atributo1
                resultado2 = pontos_turisticos1 > pontos_turisticos2 ? resultado2 += 1 : 0;
                break;
                
            case 5: // Densidade demográfica atributo1
                resultado2 = densidade_demografica1 < densidade_demografica2 ? resultado2 += 1 : 0;
                break;
            }
        }

        printf("\n%s x %s \n", nome1, nome2); // Exibe o nome das cartas sendo comparadas

        if(resultado1 > resultado2){
            printf("%s venceu!\n", &nome1);
            break;
        }
        else if(resultado1 == resultado2){
            printf("Houve um empate.\n");
            break;
        }
        else{
            printf("%s venceu!\n", nome2);
            break;
        }
    default:
        printf("A opção que você digitou não existe.\n");
        break;
    }
}