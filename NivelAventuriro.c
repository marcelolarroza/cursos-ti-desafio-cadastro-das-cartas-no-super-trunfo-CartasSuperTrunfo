#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado_c1[20];
    char codigo_da_carta_c1[10];
    char nome_da_cidade_c1[50];
    long long populacao_c1; // Alterado para long long para números maiores
    float area_c1;
    float pib_c1;
    int numero_de_pontos_turisticos_c1;
    float densidade_populacional_c1;
    float pib_per_capita_c1;

    // Declaração de variáveis para a Carta 2
    char estado_c2[20];
    char codigo_da_carta_c2[10];
    char nome_da_cidade_c2[50];
    long long populacao_c2; // Alterado para long long para números maiores
    float area_c2;
    float pib_c2;
    int numero_de_pontos_turisticos_c2;
    float densidade_populacional_c2;
    float pib_per_capita_c2;

    printf("Olá, vamos jogar super trunfo? Digite os dados de sua primeira carta. \n");

    // --- Cadastro da Carta 1 ---
    
    printf("\n--- Cadastro da Carta 1 ---\n\n");
    
    printf("Digite o Estado: ");
    scanf(" %s", estado_c1);
    
    printf("Digite o codigo da carta (ex: A01): ");
    scanf(" %s", codigo_da_carta_c1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nome_da_cidade_c1); // Corrigido para ler nomes com espaços
    
    printf("Digite a População: ");
    scanf("%lld", &populacao_c1);
    
    printf("Digite a Área em km2: ");
    scanf("%f", &area_c1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib_c1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos_c1);
    
    // --- Cadastro da Carta 2 ---
    
    printf("\n--- Cadastro da Carta 2 ---\n\n");
    
    printf("Digite o Estado: ");
    scanf(" %s", estado_c2);
    
    printf("Digite o codigo da carta (ex: B02): ");
    scanf(" %s", codigo_da_carta_c2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nome_da_cidade_c2); // Corrigido para ler nomes com espaços
    
    printf("Digite a População: ");
    scanf("%lld", &populacao_c2);
    
    printf("Digite a Área em km2: ");
    scanf("%f", &area_c2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib_c2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos_c2);

    // --- CÁLCULOS ---
    densidade_populacional_c1 = (float)populacao_c1 / area_c1;
    pib_per_capita_c1 = (pib_c1 * 1000000000.0) / populacao_c1;

    densidade_populacional_c2 = (float)populacao_c2 / area_c2;
    pib_per_capita_c2 = (pib_c2 * 1000000000.0) / populacao_c2;

    // --- Exibição dos Dados das Cartas ---

    printf("\n\n-------------------------------\n");
    printf("--- Dados das Cartas ---\n");
    printf("-------------------------------\n\n");
    
    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado_c1);
    printf("Código da carta: %s\n", codigo_da_carta_c1);
    printf("Nome da cidade: %s\n", nome_da_cidade_c1);
    printf("População: %lld\n", populacao_c1);
    printf("Área: %.2f km²\n", area_c1);
    printf("PIB: %.2f bilhões de reais\n", pib_c1);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos_c1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_c1);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita_c1);

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_c2);
    printf("Código da carta: %s\n", codigo_da_carta_c2);
    printf("Nome da cidade: %s\n", nome_da_cidade_c2);
    printf("População: %lld\n", populacao_c2);
    printf("Área: %.2f km²\n", area_c2);
    printf("PIB: %.2f bilhões de reais\n", pib_c2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos_c2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_c2);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita_c2);

    return 0;
}
