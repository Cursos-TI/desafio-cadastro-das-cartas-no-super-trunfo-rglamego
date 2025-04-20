#include    <stdio.h>
#include    <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Configura o locale para português
    
    int pop;
    float pib, capta;

    printf( "Digite a população da cidade: ");
    scanf("%d", &pop);
    printf( "Digite o PIB da cidade: ");
    scanf("%f", &pib);
    capta = pib / pop; // Cálculo do PIB per capita
    printf( "O PIB per capita é: %f\n", capta); // Exibe o resultado com duas casas decimais


    return 0;

}