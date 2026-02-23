#include <stdio.h>

int main() {
    char estado0, estado1, cidade0[20], cidade1[20];
    int numero_carta0, numero_carta1, populacao0, populacao1, pontos_turisticos0, pontos_turisticos1;
    float area0, area1, pib0, pib1;

    printf("Carta 1: Digite o nome do estado(1 letra): ");
    scanf("\n%c", &estado0);

    printf("Carta 1: Digite o nome da cidade: ");
    scanf("%s", cidade0);

    printf("Carta 1: Digite o número da carta: ");
    scanf("%d", &numero_carta0);

    printf("Carta 1: Digite a população: ");
    scanf("%d", &populacao0);

    printf("Carta 1: Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos0);

    printf("Carta 1: Digite a área (km²): ");
    scanf("%f", &area0);

    printf("Carta 1: Digite o PIB: ");
    scanf("%f", &pib0);

    printf("Carta 2: Digite o nome do estado(1 letra): ");
    scanf("\n%c", &estado1);

    printf("Carta 2: Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Carta 2: Digite o número da carta: ");
    scanf("%d", &numero_carta1);

    printf("Carta 2: Digite a população: ");
    scanf("%d", &populacao1);

    printf("Carta 2: Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Carta 2: Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Carta 2: Digite o PIB: ");
    scanf("%f", &pib1);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado0);
    printf("Cidade: %s\n", cidade0);
    printf("Número da carta: %d\n", numero_carta0);
    printf("População: %d\n", populacao0);
    printf("Pontos turísticos: %d\n", pontos_turisticos0);
    printf("Área (km²): %.2f\n", area0);
    printf("PIB (R$): %.2f\n", pib0);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Número da carta: %d\n", numero_carta1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB (R$): %.2f\n", pib1);
    printf("0 erros encontrados\n");

    return 0;
}
