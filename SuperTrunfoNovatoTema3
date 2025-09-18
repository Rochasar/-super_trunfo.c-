// Super Trunfo em C, nível novato tema3
#include <stdio.h>

int main() {
    // -------- Carta 1 --------
    //Variáveis para armazenamento dos dados da carta 1
    char estado1[20]; 
    char codigoDaCarta1[20];
    char nomeDaCidade1[20];
    unsigned long int populacao1; //alteração de int para unsigned long int, tendo em vista que a quantidade da população não pode ser negativa e que o número pode ser bastante grande para o int normal
    float area1;
    float pib1;
    int numerosDePontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapta1;
    float inversoDaDensidade1; // calcula o inverso da densidade populacional, quanto menor a densidade maior será o valor do inverso
    float superPoder1; //nova variável aderida no modo mestre, faz a soma dos atributos e também do inverso populacional

    //armazenamento dos dados inseridos pelo usuário e separação deles nas variáveis que correspondem
    printf("Digite o nome do estado da carta 1: \n");
    scanf(" %s", estado1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %s", nomeDaCidade1);

    printf("Digite o código da carta 1: \n");
    scanf(" %s", codigoDaCarta1);

    printf("Digite a população da cidade da carta 1: \n");
    scanf(" %lu", &populacao1);

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
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numerosDePontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapta2;
    float inversoDaDensidade2; // calcula o inverso da densidade populacional, quanto menor a densidade maior será o valor do inverso
    float superPoder2; //nova variável aderida no modo mestre, faz a soma dos atributos e também do inverso populacional

    //armazenamento dos dados inseridos pelo usuário e separação deles nas variáveis que correspondem
    printf("Digite o nome do estado da carta 2: \n");
    scanf(" %s", estado2);

    printf("Digite o código da carta 2: \n");
    scanf(" %s", codigoDaCarta2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %s", nomeDaCidade2);

    printf("Digite a população da cidade da carta 2: \n");
    scanf(" %lu", &populacao2);

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

    inversoDaDensidade1 = 1 / densidadePopulacional1;
    inversoDaDensidade2 = 1 / densidadePopulacional2;

    superPoder1 = populacao1 + area1 + pib1 + pibPerCapta1 + numerosDePontosTuristicos1 + inversoDaDensidade1;
    superPoder2 = populacao2 + area2 + pib2 + pibPerCapta2 + numerosDePontosTuristicos2 + inversoDaDensidade2;

    //Dados das cartas sendo exibidos ao usuário
    //carta1
    printf("Carta1:\n");
    printf("Estado: %s \n",estado1);
    printf("Cidade: %s \n",nomeDaCidade1);
    printf("Código: %s \n",codigoDaCarta1);
    printf("População: %lu \n",populacao1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB:R$ %.2f \n",pib1);
    printf("Pontos Turísticos: %d \n", numerosDePontosTuristicos1);
    printf("PIB per capta: %.2f de reais\n",pibPerCapta1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidadePopulacional1);
    printf("Super Poder: %.2f\n", superPoder1);

    //carta2
    printf("Carta2:\n");
    printf("Estado: %s \n",estado2);
    printf("Cidade: %s \n",nomeDaCidade2);
    printf("Código: %s \n",codigoDaCarta2);
    printf("População: %lu \n",populacao2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB:R$ %.2f \n",pib2);
    printf("Pontos Turísticos: %d \n", numerosDePontosTuristicos2);
    printf("PIB per capta:R$ %.2f \n",pibPerCapta2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidadePopulacional2);
    printf("Super Poder: %.2f\n", superPoder2);

    int resultado; // variável criada para comparar as cartas

    // Comparações com exibição dinâmica de quem venceu (Carta 1 ou Carta 2)
    //resultado = populacao1 > populacao2; substituido agora pelo if e else
    printf("Resultado da comparação da população das cartas 1 e 2");
    if(populacao1 > populacao2){
        printf("A carta 1 venceu");
    }
    
    else{
        printf("Acarta 2 venceu")
    }


    //resultado = area1 > area2;
    printf("Resultado da comparação da área das cartas 1 e 2");
    if(area1 > area2){
        printf("A carta 1 venceu");
    }
    
    else{
        printf("Acarta 2 venceu")
    }
    

    //resultado = pib1 > pib2;
    printf("Resultado da comparação do PIB das cartas 1 e 2");
    if(pib1 > pib2){
        printf("A carta 1 venceu");
    }
    
    else{
        printf("Acarta 2 venceu")
    }
    

    //resultado = numerosDePontosTuristicos1 > numerosDePontosTuristicos2;
    prprintf("Resultado da comparação de números turísticos das cartas 1 e 2");
    if(numerosDePontosTuristicos1 > numerosDePontosTuristicos2){
        printf("A carta 1 venceu");
    }
    
    else{
        printf("Acarta 2 venceu")
    }


    //resultado = densidadePopulacional1 < densidadePopulacional2; // menor vence
    printf("Resultado da comparação da densidade populacional das cartas 1 e 2");
    if(densidadePopulacional1 < densidadePopulacional2){
        printf("A carta 1 venceu");
    }
    
    else{
        printf("Acarta 2 venceu")
    }
    

    //resultado = pibPerCapta1 > pibPerCapta2;
    printf("Resultado da comparação do PIB per capta das cartas 1 e 2");
    if(pibPerCapta1 > pibPerCapta2){
        printf("A carta 1 venceu");
    }
    
    else{
        printf("Acarta 2 venceu")
    }
    

    //resultado = superPoder1 > superPoder2;
    printf("Resultado da comparação do super poder das cartas 1 e 2");
    if(superPoder1 > superPoder2){
        printf("A carta 1 venceu");
    }
    
    else{
        printf("Acarta 2 venceu")
    }

    return 0;
}
