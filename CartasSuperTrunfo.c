#include <stdio.h>

int main() {

   // variáveis da carta 1
    char identificacao[20];
    char cidade[50];
    char letra;
    float populacao;
    float area;
    float pib;
    int pontos;
    float densidadepopulacional1; //novas variáveis adicionados do nível intermediário
    float pibpercapita1;

    // variáveis da carta 2
    char identificacao2[20];
    char cidade2[50];
    char letra2;
    float populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidadepopulacional2; //novas variáveis adicionados do nível intermediário
    float pibpercapita2;

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
    scanf("%f", &populacao);

    printf("Digite a população do estado da carta 2: ");
    scanf("%f", &populacao2);

    printf("Digite a área do estado da carta 1: ");
    scanf("%f", &area);

    printf("Digite a área do estado da carta 2: ");
    scanf("%f", &area2);

    //calculando os novos valores paras as variáveis

    densidadepopulacional1= populacao / area;
    densidadepopulacional2= populacao2 / area2;

    printf("Digite o PIB do estado da carta 1: ");
    scanf("%f", &pib);

    printf("Digite o PIB do estado da carta 2: ");
    scanf("%f", &pib2);

    //calculando os novos valores paras as variáveis
    
    pibpercapita1= pib/ populacao;
    pibpercapita2= pib2/ populacao2;

    printf("Digite o número de pontos turísticos do estado da carta 1: ");
    scanf("%d", &pontos);

    printf("Digite o número de pontos turísticos do estado da carta 2: ");
    scanf("%d", &pontos2);

    // Exibindo informações da carta 1
    printf("\nCARTA 1\n");
    printf("Código: %s\n", identificacao);
    printf("Letra inicial: %c\n", letra);
    printf("Cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Densidade populacional: %.2f\n",densidadepopulacional1);
    printf("Pib per Capita: %.2f\n",pibpercapita1);

    // Exibindo informações da carta 2
    printf("\nCARTA 2\n");
    printf("Código: %s\n", identificacao2);
    printf("Letra inicial: %c\n", letra2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n",densidadepopulacional2);
    printf("Pib per Capita: %.2f\n",pibpercapita2);

    return 0;
}
