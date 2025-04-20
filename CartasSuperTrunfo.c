#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configura o locale para português
    // Definição das variáveis
    char codigoCarta1[4], codigoCarta2[4],
    Estado1, Estado2, nomeCidade1[50], nomeCidade2[50]; // Nome da cidade  
    unsigned int populacao1, populacao2; // População da cidade
    
    int numPontosTuristicos1, numPontosTuristicos2; // População da cidade
    float area1, area2, pib1, pib2, densidadePop1, densidadePop2, pibPerCapita1, pibPerCapita2; // PIB da cidade
    

    printf("Cadastro de Cartas - Cidades\n");
    printf("Carta 1\n");
    
    printf("Digite a letra do Estado: ");      
    scanf(" %c", &Estado1);
    
    
    printf("Digite o código da carta: ");
    scanf(" %3s", codigoCarta1);
    
    
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade1);
    
    
    printf("Digite a população da cidade: ");
    scanf("%u", &populacao1);
    
    
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    while (getchar() != '\n');   
    
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    // while (getchar() != '\n');    // tive que adicionar isso para limpar o buffer do teclado, pois 
    // ao digitar uma número float ex. 2.200 estava causando problemas na leitura do próximo scanf
    
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &numPontosTuristicos1);  
    
    densidadePop1 = (float)populacao1 / area1; // Cálculo da densidade populacional
    pibPerCapita1 = (float)pib1 / populacao1; // Cálculo do PIB per capita
// dados da segunda carta

printf("Cadastro de Cartas - Cidades\n");
    printf("=====Carta 2====\n");
    
    printf("Digite a letra do Estado: ");      
    scanf(" %c", &Estado2); 
    

    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta2); 
    

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2); // Lê até 49 caracteres ou até encontrar uma nova linha
    

    printf("Digite a população da cidade: ");
    scanf("%u", &populacao2);      
    

    printf("Digite a área da cidade: ");
    scanf(" %f", &area2);   
    

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);    
    

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf(" %d", &numPontosTuristicos2);

    densidadePop2 = (float)populacao2 / area2; // Cálculo da densidade populacional
    pibPerCapita2 = (float)pib2 / populacao2; // Cálculo do PIB per capita     



    // Exibição dos dados cadastrados
    printf("\n====Carta 1====:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadePop1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\n====Carta 2:====\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da carta: %s\n", codigoCarta2);      
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadePop2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    
    return 0;
}
