#include <stdio.h>

int main() {
    char nome[30];
    int populacao, pontos_turisticos;
    float pib, area;

    // Cadastro da cidade
    printf("Nome da cidade: ");
    scanf("%s", nome);  

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (km²): ");
    scanf("%f", &area);

    printf("PIB (bilhões): ");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    //dados cadastrados
    printf("\nDADOS DA CIDADE:\n");
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
