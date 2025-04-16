#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char codigoCarta[3];
    char Estado; // Código da cidade
    char nomeCidade[50]; // Nome da cidade  
    int populacao; // População da cidade
    float area; // Área da cidade               
    float pib; // PIB da cidade
    int numPontosTuristicos; // Número de pontos turísticos da cidade

    printf("Cadastro de Cartas - Cidades\n");
    printf("Carta 1\n");
    printf("Digite a letra do Estado: ");      
    scanf(" %c", &Estado); // Corrigido para %c e sem espaços extras
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta); // Corrigido para %s sem espaços extras
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade); // Corrigido para %s sem espaços extras
    printf("Digite a população da cidade: ");
    scanf("%i", &populacao);      
    printf("Digite a área da cidade: ");
    scanf("%f", &area);   
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &numPontosTuristicos);    

    // Exibição dos dados cadastrados
    printf("\nDados cadastrados:\n");
    printf("Estado: %c\n", Estado);
    printf("Código da carta: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numPontosTuristicos);

    return 0;
}
