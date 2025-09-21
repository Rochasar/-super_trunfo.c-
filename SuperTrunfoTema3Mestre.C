// Super Trunfo em C, nível novato tema3
#include <stdio.h>

int main() {
    // -------- Carta 1 --------
    // Variáveis para armazenamento dos dados da carta 1
    char estado1[20]; 
    char codigoDaCarta1[20];
    char nomeDaCidade1[20];
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int numerosDePontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapta1;
    float inversoDaDensidade1; 
    float superPoder1; 

    // Armazenamento dos dados inseridos pelo usuário e separação deles nas variáveis que correspondem
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
    // Variáveis para armazenamento dos dados da carta 2
    char estado2[20]; 
    char codigoDaCarta2[20];
    char nomeDaCidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numerosDePontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapta2;
    float inversoDaDensidade2; 
    float superPoder2; 

    // Armazenamento dos dados inseridos pelo usuário e separação deles nas variáveis que correspondem
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

    // Cálculo da densidade populacional e do PIB per capta
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    pibPerCapta1 = pib1 / populacao1;
    pibPerCapta2 = pib2 / populacao2;

    inversoDaDensidade1 = 1 / densidadePopulacional1;
    inversoDaDensidade2 = 1 / densidadePopulacional2;

    superPoder1 = populacao1 + area1 + pib1 + pibPerCapta1 + numerosDePontosTuristicos1 + inversoDaDensidade1;
    superPoder2 = populacao2 + area2 + pib2 + pibPerCapta2 + numerosDePontosTuristicos2 + inversoDaDensidade2;

    // Dados das cartas sendo exibidos ao usuário
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

    // -------- NOVA PARTE DO DESAFIO --------
    // Variáveis para armazenar as escolhas e os valores dos atributos escolhidos
    int escolha1, escolha2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    // Menu para o jogador escolher o primeiro atributo
    printf("\n*** Jogo do super trunfo ***\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &escolha1);

    // Armazena os valores do primeiro atributo escolhido
    switch(escolha1){
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = numerosDePontosTuristicos1; valor1_carta2 = numerosDePontosTuristicos2; break;
        case 5: valor1_carta1 = densidadePopulacional1; valor1_carta2 = densidadePopulacional2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Menu para o jogador escolher o segundo atributo (não pode repetir o primeiro)
    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    for(int i=1; i<=5; i++){
        if(i != escolha1){ // Não mostra a opção já escolhida
            switch(i){
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    scanf("%d", &escolha2);

    // Impede que o jogador escolha o mesmo atributo duas vezes
    if(escolha2 == escolha1){
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Armazena os valores do segundo atributo escolhido
    switch(escolha2){
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = numerosDePontosTuristicos1; valor2_carta2 = numerosDePontosTuristicos2; break;
        case 5: valor2_carta1 = densidadePopulacional1; valor2_carta2 = densidadePopulacional2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Mostra os resultados da comparação para os dois atributos
    printf("\n--- Resultados da comparação ---\n");
    printf("%s vs %s\n", nomeDaCidade1, nomeDaCidade2);

    // Exibe o primeiro atributo e seus valores
    printf("Atributo 1: ");
    switch(escolha1){
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("Carta 1: %.2f | Carta 2: %.2f\n", valor1_carta1, valor1_carta2);

    // Exibe o segundo atributo e seus valores
    printf("Atributo 2: ");
    switch(escolha2){
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("Carta 1: %.2f | Carta 2: %.2f\n", valor2_carta1, valor2_carta2);

    // Calcula a soma dos atributos escolhidos para cada carta
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // Ajuste para Densidade Demográfica (menor valor vence -> invertido)
    if(escolha1 == 5) soma1 += (valor1_carta1 * -2);
    if(escolha2 == 5) soma1 += (valor2_carta1 * -2);
    if(escolha1 == 5) soma2 += (valor1_carta2 * -2);
    if(escolha2 == 5) soma2 += (valor2_carta2 * -2);

    // Mostra a soma dos atributos de cada carta
    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    // Exibe o resultado final (quem venceu ou empate)
    if(soma1 > soma2){
        printf("\nResultado: A carta 1 venceu!\n");
    } else if(soma2 > soma1){
        printf("\nResultado: A carta 2 venceu!\n");
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
