#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado_c1[20];
    char codigo_da_carta_c1[10];
    char nome_da_cidade_c1[50];
    int populacao_c1;
    float area_c1;
    float pib_c1;
    int numero_de_pontos_turisticos_c1;

    // Declaração de variáveis para a Carta 2
    char estado_c2[20];
    char codigo_da_carta_c2[10];
    char nome_da_cidade_c2[50];
    int populacao_c2;
    float area_c2;
    float pib_c2;
    int numero_de_pontos_turisticos_c2;
    
    printf("Olá, vamos jogar super trunfo? Digite os dados de sua primeira carta. \n");

    // --- Cadastro da Carta 1 ---
    
    printf("\n--- Cadastro da Carta 1 ---\n\n");
    
    printf("Digite o Estado: ");
    scanf(" %s", estado_c1); // Espaço antes do %s para ignorar quebra de linha
    
    printf("Digite o codigo da carta (ex: A01): ");
    scanf(" %s", codigo_da_carta_c1); // Espaço antes do %s
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome_da_cidade_c1); // Espaço antes do %s
    
    printf("Digite a População: ");
    scanf("%d", &populacao_c1);
    
    printf("Digite a Área em km2: ");
    scanf("%f", &area_c1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib_c1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos_c1);
    

    // --- Cadastro da Carta 2 ---
    
    printf("\n--- Cadastro da Carta 2 ---\n\n");
    
    printf("Digite o Estado: ");
    scanf(" %s", estado_c2); // Espaço antes do %s
    
    printf("Digite o codigo da carta (ex: B02): ");
    scanf(" %s", codigo_da_carta_c2); // Espaço antes do %s
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome_da_cidade_c2); // Espaço antes do %s
    
    printf("Digite a População: ");
    scanf("%d", &populacao_c2);
    
    printf("Digite a Área em km2: ");
    scanf("%f", &area_c2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib_c2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos_c2);

    // --- Exibição dos Dados das Cartas ---

    printf("\n\n-------------------------------\n");
    printf("--- Dados das Cartas ---\n");
    printf("-------------------------------\n\n");
    
    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado_c1);
    printf("Código da carta: %s\n", codigo_da_carta_c1);
    printf("Nome da cidade: %s\n", nome_da_cidade_c1);
    printf("População: %d\n", populacao_c1);
    printf("Área: %.2f km²\n", area_c1);
    printf("PIB: %.2f bilhões de reais\n", pib_c1);
    printf("Número de Pontos Turísticos: %d\n\n", numero_de_pontos_turisticos_c1);
    
    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_c2);
    printf("Código da carta: %s\n", codigo_da_carta_c2);
    printf("Nome da cidade: %s\n", nome_da_cidade_c2);
    printf("População: %d\n", populacao_c2);
    printf("Área: %.2f km²\n", area_c2);
    printf("PIB: %.2f bilhões de reais\n", pib_c2);
    printf("Número de Pontos Turísticos: %d\n\n", numero_de_pontos_turisticos_c2);

    return 0;
}