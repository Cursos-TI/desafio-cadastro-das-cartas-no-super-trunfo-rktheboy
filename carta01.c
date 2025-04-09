#include <stdio.h>

int main(){
    // Declaração de variáveis 
    int populacao, turismo; 
    char codigo[4], estado[12], cidade[10]; 
    float area, pib; 

    // Solicitação de dados ao usuário
    printf("Digite o nome estado: \n");
    scanf("%s" , estado); 

    printf("Digite o codigo: \n");
    scanf("%s" , codigo); 

    printf("Digite o nome da cidade: \n");
    scanf("%s" , cidade); 

    printf("Digite a população total: \n");
    scanf("%d" , &populacao); 

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d" , &turismo); 

    printf("Digite a área total: \n");
    scanf("%f" , &area); 

    printf("Digite o PIB: \n");
    scanf("%f" , &pib); 

    // Exibição dos dados coletados
    printf("Carta 01: \n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Código da carta: %s\n", codigo);
    printf("População: %d\n" , populacao);
    printf("Área: %.2f\n" , area);
    printf("PIB: %.2f\n" , pib);
    printf("Número de pontos turísticos: %d\n" , turismo);

    return 0; 
}