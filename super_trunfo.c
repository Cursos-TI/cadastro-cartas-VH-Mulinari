#include <stdio.h>
// Definindo a estrutura (struct) para uma Carta do Super Trunfo.
// Isso ajuda a agrupar todas as informações de uma única entidade (a carta).
typedef struct {
    char estado;
    char codigo_carta[5]; // Ex: "A01" (3 caracteres + 1 para o \0) - usando 5 para segurança
    char nome_cidade[50]; // Tamanho suficiente para o nome da cidade
    unsigned long int populacao;
    float area_km2;
    float pib_bilhoes;
    int num_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder
}
CartaSuperTrunfo;
    // Função principal do programa
int main() {
    // 1. DECLARAÇÃO DE VARIÁVEIS
    // Criando duas variáveis do tipo "CartaSuperTrunfo" para armazenar os dados das duas cartas.
    CartaSuperTrunfo carta1;
    CartaSuperTrunfo carta2;

    printf("===========================================\n");
    printf("     Super Trunfo de Cidades - Cadastro    \n");
    printf("===========================================\n\n");


    // -----------------------------------------------------------------------------------
    //                       CADASTRO DA CARTA 1
    // -----------------------------------------------------------------------------------
    printf(">>> INSERINDO DADOS DA CARTA 1 <<<\n");

    // 1. Estado (char)
    printf("Estado (Uma letra de 'A' a 'H'): ");
    // Isso e importante para a correta leitura de 'char'.
    scanf(" %c", &carta1.estado);

    // 2. Codigo da Carta (string)
    printf("Codigo da Carta (Ex: A01, B03 - max 4 caracteres): ");
    // %s le a string ate encontrar um espaco em branco ou quebra de linha.
    scanf("%s", carta1.codigo_carta);

    // 3. Nome da Cidade (string)
    printf("Nome da Cidade (max 49 caracteres): ");
    scanf(" %[^\n]", carta1.nome_cidade);

    // 4. Populacao (int)
    printf("Populacao (Numero de habitantes - Ex: 12325000): ");
    scanf("%lu", &carta1.populacao);

    // 5. Area (float)
    printf("Area em km2 (Ex: 1521.11): ");
    scanf("%f", &carta1.area_km2);

    // 6. PIB (float)
    printf("PIB em bilhoes de reais (Ex: 699.28): ");
    scanf("%f", &carta1.pib_bilhoes);

    // 7. Numero de Pontos Turisticos (int)
    printf("Numero de Pontos Turisticos (Ex: 50): ");
    scanf("%d", &carta1.num_pontos_turisticos);

    printf("\n--- Carta 1 cadastrada com sucesso! ---\n\n");


    // -----------------------------------------------------------------------------------
    //                       CADASTRO DA CARTA 2
    // -----------------------------------------------------------------------------------
    printf(">>> INSERINDO DADOS DA CARTA 2 <<<\n");

    // 1. Estado (char)
    printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &carta2.estado);

    // 2. Codigo da Carta (string)
    printf("Codigo da Carta (Ex: A01, B03 - max 4 caracteres): ");
    scanf("%s", carta2.codigo_carta);

    // 3. Nome da Cidade (string)
    printf("Nome da Cidade (max 49 caracteres): ");
    scanf(" %[^\n]", carta2.nome_cidade);

    // 4. Populacao (int)
    printf("Populacao (Numero de habitantes - Ex: 12325000): ");
    scanf("%lu", &carta2.populacao);

    // 5. Area (float)
    printf("Area em km2 (Ex: 1521.11): ");
    scanf("%f", &carta2.area_km2);

    // 6. PIB (float)
    printf("PIB em bilhoes de reais (Ex: 699.28): ");
    scanf("%f", &carta2.pib_bilhoes);

    // 7. Numero de Pontos Turisticos (int)
    printf("Numero de Pontos Turisticos (Ex: 50): ");
    scanf("%d", &carta2.num_pontos_turisticos);

    printf("\n--- Carta 2 cadastrada com sucesso! ---\n\n");

    //Inversão
  float inversoPib1;
  float inversoPib2;
  inversoPib1 = 1 / carta1.densidade_populacional;
  inversoPib2 = 1 / carta2.densidade_populacional;

  //Super Poder
  carta1.super_poder = carta1.populacao + carta1.area_km2 + carta1.pib_bilhoes + carta1.num_pontos_turisticos + carta1.pib_per_capita + inversoPib1;
  carta2.super_poder = carta2.populacao + carta2.area_km2 + carta2.pib_bilhoes + carta2.num_pontos_turisticos + carta2.pib_per_capita + inversoPib2;



    // -----------------------------------------------------------------------------------
    //                       EXIBIÇÃO DAS CARTAS CADASTRADAS
    // -----------------------------------------------------------------------------------
    printf("===========================================\n");
    printf("     CARTAS CADASTRADAS - RESULTADO FINAL  \n");
    printf("===========================================\n\n");

    // Exibindo a Carta 1
    printf(">>> CARTA 1 <<<\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo_carta);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %lu\n", carta1.populacao);
    // Usando %.2f para formatar o float com duas casas decimais.
    printf("Area: %.2f km²\n", carta1.area_km2);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib_bilhoes);
    printf("Numero de Pontos Turisticos: %d\n", carta1.num_pontos_turisticos);
    //calculos
    carta1.densidade_populacional = carta1.populacao / carta1.area_km2;
    carta1.pib_per_capita = (carta1.pib_bilhoes*10000) / carta1.populacao;   
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta1.pib_per_capita);
    printf("Super poder Carta 1: %.2f\n", carta1.super_poder);

    // Exibindo a Carta 2
    printf(">>> CARTA 2 <<<\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area_km2);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib_bilhoes);
    printf("Numero de Pontos Turisticos: %d\n", carta2.num_pontos_turisticos);
    //calculos
    carta2.densidade_populacional = carta2.populacao / carta2.area_km2;
    carta2.pib_per_capita = (carta2.pib_bilhoes*10000) / carta2.populacao;   
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta2.pib_per_capita);
    printf("Super poder Carta 1: %.2f\n", carta2.super_poder);

    //Variaveis
    int resultadoPopulacao = (carta1.populacao > carta2.populacao);
    int resultadoArea = (carta1.area_km2 > carta2.area_km2);
    int resultadoPib = (carta1.pib_bilhoes > carta2.pib_bilhoes);
    int resultadoPontosT = (carta1.num_pontos_turisticos > carta2.num_pontos_turisticos);
    int resultadoPibP1 = (carta1.pib_per_capita > carta2.pib_per_capita);
    int resultadoSuperPoder = (carta1.super_poder > carta2.super_poder);

    int resultadoDensidade = (carta1.densidade_populacional < carta2.densidade_populacional);

    //Resultados das finalizações
    printf("\n*** Comparação entre as cartas ***\n");
    printf("População: Carta 1 venceu(%d)\n", resultadoPopulacao);
    printf("Área: Carta 1 venceu(%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu(%d)\n", resultadoPib);
    printf("Pontos Turistícos: carta 1 venceu(%d)\n", resultadoPontosT);
    printf("Densidade Populacional: Carta 2 venceu(%d)\n", resultadoDensidade);
    printf("PIB per Capita: Carta 1 venceu(%d)\n", resultadoPibP1);
    printf("Super Poder: Carta 1 venceu(%d)\n", resultadoSuperPoder);


    return 0;
}