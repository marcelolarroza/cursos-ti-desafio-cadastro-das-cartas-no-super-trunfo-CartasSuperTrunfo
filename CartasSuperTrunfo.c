#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.


    // Declaração de variáveis para a Carta 1
        char Carta_c1[4];
        char Estado_c1[20];
        char Codigo_da_carta_c1[4];
        char Nome_da_cidade_c1[50];
        int Populacao_c1;
        float Area_c1;
        float Pib_c1;
        int Numero_de_pontos_turisticos_c1;


                    // Declaração de variáveis para a Carta 2
        char Carta_c2[4];
        char Estado_c2 [20];
        char Codigo_da_carta_c2[4];
        char Nome_da_cidade_c2[50];
        int Populacao_c2;
        float Area_c2;
        float Pib_c2;
        int Numero_de_pontos_turisticos_c2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    
       printf ("Olá, vamos jogar super trunfo ? digite os dados de sua primeira carta. \n");
       

                   // Lendo dados da carta número 1//
        
        printf("\n\n--- Cadastro da Carta 1 ---\n\n");

        printf("Digite uma letra para seu Estado (A a H): ");
        scanf(" %c" , &Estado_c1); 

        printf("Digite o codigo da carta (ex: A01) : ");
        scanf("%s" , Codigo_da_carta_c1);     

        printf("Digite o Nome de sua Cidade: ");
        scanf("%s" , Nome_da_cidade_c1);

        printf("Digite a População de sua Cidade: ");
        scanf("%d" , &Populacao_c1);

        printf("Digite a area de sua cidade em km2: ");
        scanf("%f" , &Area_c1);

        printf("Digite o Pib de sua Cidade: ");
        scanf("%f" , &Pib_c1);

        printf("Digite número de pontos turisticos da cidade: ");
        scanf("%d" , &Numero_de_pontos_turisticos_c1 );
        

               //Lendo dados da carta número 2//

        printf("\n\n--- Cadastro da Carta 2 ---\n\n");

        printf("Digite uma letra para seu Estado (A a H): ");
        scanf(" %c" , &Estado_c2 ); 

        printf("Digite o codigo da carta (ex: B02) : ");
        scanf("%s" , Codigo_da_carta_c2);     

        printf("Digite o Nome de sua Cidade: ");
        scanf("%s" , Nome_da_cidade_c2);

        printf("Digite a População de sua Cidade: ");
        scanf("%d" , &Populacao_c2);

        printf("Digite a area de sua cidade em km2: ");
        scanf("%f" , &Area_c2);

        printf("Digite o Pib de sua Cidade: ");
        scanf("%f" , &Pib_c2);

        printf("Digite número de pontos turisticos da cidade: ");
        scanf("%d" , &Numero_de_pontos_turisticos_c2 );
        



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


     // --- EXIBIÇÃO DOS DADOS CADASTRADOS ---

        printf("\n\n-------------------------------\n");
        printf("--- Dados das Cartas ---\n");
        printf("-------------------------------\n\n");


             //EXIBIÇÃO DA CARTA 1//


             printf("Carta 1: \n");
             printf("Estado: %c\n", Estado_c1 );
             printf("Código da carta: %s\n" , Codigo_da_carta_c1 );
             printf("Nome da cidade: %s\n" , Nome_da_cidade_c1);
             printf("População: %d\n" , Populacao_c1);
             printf("Área: %f\n" , Area_c1);
             printf("PIB: %f\n" , Pib_c1);
             printf("Número de Pontos Turísticos: %d\n\n" , Numero_de_pontos_turisticos_c1);


                          //EXIBIÇÃO DA CARTA 2//

             printf("Carta 2: \n");
             printf("Estado: %c\n", Estado_c2 );
             printf("Código da carta: %s\n" , Codigo_da_carta_c2 );
             printf("Nome da cidade: %s\n" , Nome_da_cidade_c2);
             printf("População: %d\n" , Populacao_c2);
             printf("Área: %f\n" , Area_c2);
             printf("PIB: %f\n" , Pib_c2);
             printf("Número de Pontos Turísticos: %d\n\n" , Numero_de_pontos_turisticos_c2);



    return 0;
}
