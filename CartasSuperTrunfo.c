#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char codigoCarta1[3], codigoCarta2[3];
    char Estado1, Estado2; // Código da cidade
    char nomeCidade1[50], nomeCidade2[50]; // Nome da cidade  
    int populacao1, populacao2; // População da cidade
    float area1, area2; // Área da cidade               
    float pib1, pib2; // PIB da cidade
    int numPontosTuristicos1, numPontosTuristicos2; // Número de pontos turísticos da cidade

    printf("Cadastro de Cartas - Cidades\n");
    printf("Carta 1\n");
    
    printf("Digite a letra do Estado: ");      
    scanf("%c", &Estado1);
    getchar(); // Consome o '\n' residual
    
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta1);
    getchar(); // Consome o '\n' residual
    
    printf("Digite o nome da cidade: ");
    scanf("%49[^\n]", nomeCidade1);
    getchar(); // Consome o '\n' residual
    
    printf("Digite a população da cidade: ");
    scanf("%i", &populacao1);
    getchar(); // Consome o '\n' residual
    
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    getchar(); // Consome o '\n' residual
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);    
    getchar();
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &numPontosTuristicos1);    
    getchar();
// dados da segunda carta

printf("Cadastro de Cartas - Cidades\n");
    printf("Carta 2\n");
    
    printf("Digite a letra do Estado: ");      
    scanf(" %c", &Estado2); // Corrigido para %c e sem espaços extras
    getchar();

    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta2); // Corrigido para %s sem espaços extras
    getchar();

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2); // Lê até 49 caracteres ou até encontrar uma nova linha
    getchar();

    printf("Digite a população da cidade: ");
    scanf("%i", &populacao2);      
    getchar();

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);   
    getchar();

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);    
    getchar();
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &numPontosTuristicos2);













    // Exibição dos dados cadastrados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da carta: %s\n", codigoCarta2);      
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
    
    return 0;
}
