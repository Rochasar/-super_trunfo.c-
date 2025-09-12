// Super Trunfo em C, nível novato
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

    //Dados das cartas sendo exibidos ao usuário

    //carta1

    printf("Carta1:\n");
    printf("Estado: %s \n",estado1);
    printf("Cidade: %s \n",nomeDaCidade1);
    printf("Código: %s \n",codigoDaCarta1);
    printf("População: %d \n",populacao1);
    printf("Área: %f \n",area1);
    printf("PIB: %f \n",pib1);
    printf("Pontos Turísticos: %d \n", numerosDePontosTuristicos1);

    //carta2

    printf("Carta2:\n");
    printf("Estado: %s \n",estado2);
    printf("Cidade: %s \n",nomeDaCidade2);
    printf("Código: %s \n",codigoDaCarta2);
    printf("População: %d \n",populacao2);
    printf("Área: %f \n",area2);
    printf("PIB: %f \n",pib2);
    printf("Pontos Turísticos: %d \n", numerosDePontosTuristicos2);


    return 0;
}
