#include <stdio.h>

int main(){

    //cria as variáveis
    char estado1[50], estado2[50];
    char codigocarta1[50], codigocarta2[50]; 
    char nomecidade1[50], nomecidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturisticos1, pturisticos2;
    unsigned int superPoder1, superPoder2;
    
    //printa as perguntas no terminal junto da entrada de dados
    printf("Digite o estado da carta 1(A - H): \n");
    scanf("%s", &estado1);

    printf("Digite o estado da carta 2(A - H): \n");
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
    scanf("%u", &populacao1);

    printf("Digite a quantidade de habitantes da cidade 2: \n");
    scanf("%u", &populacao2);

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

    //variaveis após o scanf 
    //densidade populacional = população / area
    float dp1 = (float) populacao1 / area1;
    float dp2 = (float) populacao2 / area2;

    //pib per capita = pib / população

    float ppc1 = (float) pib1 / populacao1;
    float ppc2 = (float) pib2 / populacao2;

    //super poder das cartas

    superPoder1 = (populacao1 + area1 + pib1 + pturisticos1 + ppc1) / dp1;
    superPoder2 = (populacao2 + area2 + pib2 + pturisticos2 + ppc2) / dp2;

    //printa as informações fornecidas pelo usuário no terminal
    
    printf("\nInformações da carta 1: \n");
    printf("\nEstado da carta: %s\n", estado1);
    printf("Código da carta: %s%s\n", estado1, codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %u\n", populacao1);
    printf("Área(em km²): %.2f km²\n", area1);
    printf("PIB(Produto Interno Bruto): %.2f R$\n", pib1);
    printf("Quantidade de pontos turísticos na cidade: %d\n", pturisticos1);
    printf("Densidade populacional: %.2f por km²\n", dp1);
    printf("Pib Per Capita: %.2fR$\n", ppc1);
    printf("Super poder: %u\n", superPoder1);
   
    printf("\nInformações da carta 2: \n");
    printf("\nEstado da carta : %s\n", estado2);
    printf("Código da carta: %s%s\n", estado2, codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %u\n", populacao2);
    printf("Área(em km²): %.2f km²\n", area2);
    printf("PIB(Produto Interno Bruto): %.2f R$\n", pib2);
    printf("Quantidade de pontos turísticos na cidade: %d\n", pturisticos2);
    printf("Densidade populacional: %.2f por km²\n", dp2);
    printf("Pib Per Capita: %.2fR$\n", ppc2);
    printf("Super poder: %u\n", superPoder2);

    printf("\n  *** COMPARAÇÃO DAS CARTAS ***  \n");
    printf("Carta 1 = 1\n");
    printf("Carta 2 = 0\n");

    printf("\nPopulação: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turísticos: %d\n", pturisticos1 > pturisticos2);
    printf("Densidade populacional: %d\n", dp1 > dp2);
    printf("PIB per capita: %d\n", ppc1 > ppc2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);
    


    return 0;
}
