#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado[4], codigo[5], nome[20];
     float area, pib; 
    int populacao, npt; //npt= numero de pontos turísticos
   
    printf("Preencha a primeira carta\n");
    printf("Carta A\n");

    printf("Estado: \n");
    scanf("%s", estado);
    printf("\n");

    printf("Código da Carta: \n");
    scanf("%s", codigo);
    printf("\n");

    printf("Nome da Cidade: \n");
    scanf("%s", nome);
    printf("\n");

    printf("População: \n");
    scanf("%d", &populacao);
    printf("\n");
    
    printf("Área (em km²): \n");
    scanf("%f", &area);
    printf("\n");
    
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("\n");
    
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &npt);
    printf("\n");
    

    printf("Carta A\n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f ", area);
    printf("km²\n");
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", npt);
    printf("\n");
    
    printf("Preencha a segunda carta\n");
    printf("Carta B\n");

    printf("Estado: \n");
    scanf("%s", estado);
    printf("\n");
    
    printf("Código da Carta: \n");
    scanf("%s", codigo);
    printf("\n");
    
    printf("Nome da Cidade: \n");
    scanf("%s", nome);
    printf("\n");
    
    printf("População: \n");
    scanf("%d", &populacao);
    printf("\n");
    
    printf("Área (em km²):\n");
    scanf("%f", &area);
    printf("\n");
    
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("\n");
    
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &npt);
    printf("\n");
    
    printf("Carta B\n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f ", area);
    printf("km²\n");
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", npt);
    printf("\n");
    printf("\n");
    printf("Obrigado\n");

    return 0;
}
