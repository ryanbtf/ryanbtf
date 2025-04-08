#include <stdio.h>

int main(){

    //cria as variáveis
    char estado1;
    char estado2[20];
    char codigocarta1[50], codigocarta2[50]; 
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturisticos1, pturisticos2;

    //printa as perguntas no terminal junto da entrada de dados
    printf("Digite o estado da carta 1 (A - H): \n");
    scanf("%c", &estado1);

    printf("Digite o estado da carta 2 (A - H): \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta 1: (01-04)\n");
    scanf("%s", &codigocarta1);

    printf("Digite o código da carta 2: (01-04)\n");
    scanf("%s", &codigocarta2);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &nomecidade1);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &nomecidade2);

    printf("Digite a quantidade de habitantes da cidade 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de habitantes da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 1 (em km²): \n");
    scanf("%f", &area1);

    printf("Digite a área da cidade 2 (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade 1: \n");
    scanf("%d", &pturisticos1);

    printf("Digite a quantidade de pontos turísticos da cidade 2: \n");
    scanf("%d", &pturisticos2);

    //printa as informações fornecidas pelo usuário no terminal
    printf("\nInformações da carta 1: \n");
    printf("\nEstado da carta: %c\n", estado1);
    printf("Código da carta: %c%s\n", estado1, codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área(em km²): %.2f km²\n", area1);
    printf("PIB(Produto Interno Bruto): %.2f R$\n", pib1);
    printf("Quantidade de pontos turísticos na cidade: %d\n", pturisticos1);
   
    printf("\nInformações da carta 2: \n");
    printf("\nEstado da carta: %s\n", estado2);
    printf("Código da carta: %c%s\n", estado2, codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área(em km²): %.2f km²\n", area2);
    printf("PIB(Produto Interno Bruto): %.2f R$\n", pib2);
    printf("Quantidade de pontos turísticos na cidade: %d\n", pturisticos2);

    return 0;
}
