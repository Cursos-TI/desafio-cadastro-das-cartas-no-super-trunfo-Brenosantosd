#include <stdio.h>

int main() {
    // variáveis da carta 1
    char identificacao[20];
    char cidade[50];
    char letra;
    int populacao;
    float area;
    float pib;
    int pontos;

    // variáveis da carta 2
    char identificacao2[20];
    char cidade2[50];
    char letra2;
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("DESAFIO SUPER TRUNFO!\n");

    // coleta de informações
    printf("Digite o codigo da carta 1: ");
    scanf("%s", identificacao);

    printf("Digite o código da carta 2: ");
    scanf("%s", identificacao2);

    getchar(); // limpa o buffer antes de ler um caractere

    printf("Digite a primeira letra da cidade da carta 1: ");
    scanf("%c", &letra);

    getchar(); // limpa o buffer novamente

    printf("Digite a primeira letra da cidade da carta 2: ");
    scanf("%c", &letra2);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a população do estado da carta 1: ");
    scanf("%d", &populacao);

    printf("Digite a população do estado da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área do estado da carta 1: ");
    scanf("%f", &area);

    printf("Digite a área do estado da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB do estado da carta 1: ");
    scanf("%f", &pib);

    printf("Digite o PIB do estado da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos do estado da carta 1: ");
    scanf("%d", &pontos);

    printf("Digite o número de pontos turísticos do estado da carta 2: ");
    scanf("%d", &pontos2);

    // Exibindo informações da carta 1
    printf("\nCARTA 1\n");
    printf("Código: %s\n", identificacao);
    printf("Letra inicial: %c\n", letra);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos);

    // Exibindo informações da carta 2
    printf("\nCARTA 2\n");
    printf("Código: %s\n", identificacao2);
    printf("Letra inicial: %c\n", letra2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}
