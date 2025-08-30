#include <stdio.h>


int main() {
    
   char nome[50];
    int população;
    float area;
    float pib;
    int turisticos;
   
    printf("carta 1:\n");

    printf("digite o nome da cidade 1: \n");
    scanf("%s", &nome);
    
    printf("digite o numero de população da cidade 1\n");
    scanf("%d", &população);
   
    printf("digite o pib da cidade 1\n");
    scanf("%f", &pib);

    printf("digite a area da cidade 1\n");
    scanf("%f", &area);

    printf("digite o numero de pontos turisticos da cidade 1\n");
    scanf("%d", &turisticos);

    printf("cidade 1: %s \n", nome);
    printf("população: %d - pib: %f, \n", população, pib);
    printf("Areas: %f: - Pontos turisticos: %d\n", area, turisticos);

    printf("carta 2: \n");
    
    printf("digite o nome da cidade 2\n");
    scanf("%s", &nome);

    printf("digite o numero de população da cidade 2\n");
    scanf("%d", &população);

    printf("digite o numero do PIB da cidade 2\n");
    scanf("%f", &pib);

    printf("digite a area da cidade 2\n");
    scanf("%f", &area);

    printf("digite o numero de pontos turisticos da cidade 2\n");
    scanf("%d", &turisticos);

    printf("cidade 2: %s \n", nome);
    
    printf("população: %d - pib: %f, \n", população, pib);
    printf("area %f: - Pontos turisticos: %d\n", area, turisticos);
    return 0;
}
