#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Estado[4];
    char Codigo[4];
    char Cidade[50];
    int Populacao, Pontos_turistico;
    float Area, pib;
    char Estado2[4];
    char Codigo2[4];
    char Cidade2[50];
    int Populacao2, Pontos_turistico2;
    float Area2, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite a sigla de um Estado Brasileiro: ");
    scanf("%s", Estado);

    getchar();

    printf("Digite o nome de uma cidade do Estado escolhido: ");
    fgets(Cidade, sizeof(Cidade), stdin);
    Cidade[strcspn(Cidade, "\n")] = '\0';

    printf("Insira o tamanho da populacao: ");
    scanf("%d", &Populacao);

    printf("Insira qual a área da cidade: ");
    scanf("%f", &Area);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de Pontos Turisticos existem na cidade: ");
    scanf("%d", &Pontos_turistico);

    printf("Digite a sigla de um Estado Brasileiro: ");
    scanf("%s", Estado2);

    getchar();

    printf("Digite o nome de uma cidade do Estado escolhido: ");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    Cidade2[strcspn(Cidade2, "\n")] = '\0';

    printf("Insira o tamanho da populacao: ");
    scanf("%d", &Populacao2);

    printf("Insira qual a área da cidade: ");
    scanf("%f", &Area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de Pontos Turisticos existem na cidade: ");
    scanf("%d", &Pontos_turistico2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1: \nCodigo: %s01 \n", Estado);
    printf("Nome da Cidade: %s \nPopulacao: %d \nArea: %e km² \nPIB: %f de reais \nPontos Turisticos: %d\n",  
          Cidade, Populacao, Area, pib, Pontos_turistico);

    printf("Carta 2: \nCodigo: %s02 \n", Estado2);
    printf("Nome da Cidade: %s \nPopulacao: %d \nArea: %e km² \nPIB: %f de reais \nPontos Turisticos: %d", 
        Cidade2, Populacao2, Area2, pib2, Pontos_turistico2);
    return 0;
}
