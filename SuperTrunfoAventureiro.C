// Super Trunfo em C, nível aventureiro
#include <stdio.h>

int main() {
    // -------- Carta 1 --------
     //Variáveis para armazenamento dos dados da carta 1

    char estado1[20]; 
    char codigoDaCarta1[20];
    char nomeDaCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int numerosDePontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapta1;

    //armazenamento dos dados inseridos pelo usuário e separação deles nas variáveis que correspondem
   
    printf("Digite o nome do estado da carta 1: \n");
    scanf(" %s", estado1);

     printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %s", nomeDaCidade1);

    printf("Digite o código da carta 1: \n");
    scanf(" %s", codigoDaCarta1);

    printf("Digite a população da cidade da carta 1: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade da carta 1: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade da carta 1: \n");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos da cidade da carta 1: \n");
    scanf(" %d", &numerosDePontosTuristicos1);

    // -------- Carta 2 --------

    //Variáveis para armazenamento dos dados da carta 2

    char estado2[20]; 
    char codigoDaCarta2[20];
    char nomeDaCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numerosDePontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapta2;

    //armazenamento dos dados inseridos pelo usuário e separação deles nas variáveis que correspondem

    printf("Digite o nome do estado da carta 2: \n");
    scanf(" %s", estado2);

    printf("Digite o código da carta 2: \n");
    scanf(" %s", codigoDaCarta2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %s", nomeDaCidade2);

    printf("Digite a população da cidade da carta 2: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade da carta 2: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade da carta 2: \n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da cidade da carta 2: \n");
    scanf(" %d", &numerosDePontosTuristicos2);

    //Cálculo da densidade populacional e do PIB per capta
    
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    pibPerCapta1 = pib1 / populacao1;
    pibPerCapta2 = pib2 / populacao2;

    //Dados das cartas sendo exibidos ao usuário
    //carta1

    printf("Carta1:\n");
    printf("Estado: %s \n",estado1);
    printf("Cidade: %s \n",nomeDaCidade1);
    printf("Código: %s \n",codigoDaCarta1);
    printf("População: %d \n",populacao1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB:R$ %.2f \n",pib1);
    printf("Pontos Turísticos: %d \n", numerosDePontosTuristicos1);
    printf("PIB per capta: %.2f de reais\n",pibPerCapta1);
    printf("Densidade Populacional: %2f hab/km²\n",densidadePopulacional1);

    //carta2

    printf("Carta2:\n");
    printf("Estado: %s \n",estado2);
    printf("Cidade: %s \n",nomeDaCidade2);
    printf("Código: %s \n",codigoDaCarta2);
    printf("População: %d \n",populacao2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB:R$ %.2f \n",pib2);
    printf("Pontos Turísticos: %d \n", numerosDePontosTuristicos2);
    printf("PIB per capta:R$ %.2f \n",pibPerCapta2);
    printf("Densidade Populacional: %2f hab/km²\n",densidadePopulacional2);


    return 0;
}
