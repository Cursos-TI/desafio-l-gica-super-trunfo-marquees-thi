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
    int atributos; // Referente às opções do menu de comparação de atributos

    printf("Seja bem vindo(a) ao jogo Super Trunfo!\n");
    printf("1. Regra do jogo.\n");
    printf("2. Exibir as cartas.\n"); // Não sei se isso deveria existir
    printf("3. Comparar atributos.\n");
    printf("Digite a opção desejada (1-3): ");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("\nA carta com maior valor no atributo escolhido, vence (exceto Densidade Demográfica).");
        break;
    case 2:
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
    
    case 3:
        printf("\nLista de atributos: \n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("Digite o atributo que deseja comparar (1-5): ");
        scanf("%d", &atributos);

        printf("\n%s x %s \n", nome1, nome2);
        switch(atributos){
        case 1: //População
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %d\n", populacao1);
            printf("Carta 2 - %d\n", populacao2);
            if(populacao1 > populacao2){
                printf("Carta 1 venceu!\n");
            }
            else if(populacao1 == populacao2){
                printf("Houve um empate!\n");
            }
            else{
                printf("Carta 2 venceu!\n");
            }
            break;
        
        case 2: // Área
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %.2f\n", area1);
            printf("Carta 2 - %.2f\n", area2);
            if(area1 > area2){
                printf("Carta 1 venceu!\n");
            }
            else if(area1 == area2){
                printf("Houve um empate!\n");
            }
            else{
                printf("Carta 2 venceu!\n");
            }
            break;

        case 3: // PIB
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %.4f\n", pib1);
            printf("Carta 2 - %.4f\n", pib2);
            if(pib1 > pib2){
                printf("Carta 1 venceu!\n");
            }
            else if(pib1 == pib2){
                printf("Houve um empate!\n");
            }
            else{
                printf("Carta 2 venceu!\n");
            }
            break;
        
        case 4: // Pontos Turísticos
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %d\n", pontos_turisticos1);
            printf("Carta 2 - %d\n", pontos_turisticos2);
            if(pontos_turisticos1 > pontos_turisticos2){
                printf("Carta 1 venceu!\n");
            }
            else if(pontos_turisticos1 == pontos_turisticos2){
                printf("Houve um empate!\n");
            }
            else{
                printf("Carta 2 venceu!\n");
            }
            break;
        
        case 5: // Densidade Demográfica
            printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n");
            printf("Carta 1 - %.2f\n", densidade_demografica1);
            printf("Carta 2 - %.2f\n", densidade_demografica2);
            if(densidade_demografica1 < densidade_demografica2){
                printf("Carta 1 venceu!\n");
            }
            else if(densidade_demografica1 == densidade_demografica2){
                printf("Houve um empate!\n");
            }
            else{
                printf("Carta 2 venceu!\n");
            }
            break;
        }
    break;
    default:
        printf("A opção que você digitou não existe.");
        break;
    }
}