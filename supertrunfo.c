#include <stdio.h>

int main() {
    
    // Definição das variáveis para cada atributo das cartas.

    char estado1, estado2;                                 
    char codigo1[20], codigo2[20];
    char nome_cidade1[20], nome_cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;                                   
    double pib1, pib2;                                    
    int pontos_turisticos1, pontos_turisticos2;

    // Cadastro das cartas:
    // Pimeira carta.
    // Funções printf e scanf para o cadastro de cada atributo da primeira carta.

    printf("Vamos começar! Digite uma letra de representação para a primeira carta (de 'A' a 'H'): \n");
    scanf(" %c", &estado1);

    printf("Vamos criar o código da carta! Digite a letra do seu estado e em seguida digite um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a aréa em km² de sua cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em reais, ex: 5000000000): \n");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);

    // Segunda carta.
    // Funções printf e scanf para o cadastro de cada atributo da segunda segunda carta.

    printf("Certo, agora vamos para a segunda carta. Digite uma letra de representação (De 'A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Digite seu código: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km² de sua cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em reais, ex: 5000000000): \n");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional:

    float densidade_populacional_1 = populacao1 / area1;
    float densidade_populacional_2 = populacao2 / area2;

    // Cálculo do PIB per capita:

    double pib_per_capita1 = pib1 / populacao1;
    double pib_per_capita2 = pib2 / populacao2;

    // Criação da váriavel SUPER PODER:

    float super_poder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + (1 / densidade_populacional_1) + pib_per_capita1;
    float super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + (1 / densidade_populacional_2) + pib_per_capita2;

    // Definindo as comparações atributo por atributo:

    int resultado_populacao = populacao1 > populacao2;
    int resultado_area = area1 > area2;
    int resultado_pib = pib1 > pib2;
    int resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    int resultado_densidade_populacional_invertida = densidade_populacional_1 > densidade_populacional_2;
    int resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    int resultado_super_poder = super_poder1 > super_poder2;

    // Exibição dos dados das cartas:
    // Carta 1.

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.0lf\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional_1);
    printf("PIB per capita: %.0lf", pib_per_capita1);

    // Carta 2.

    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.0lf\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional_2);
    printf("PIB per capita: %.0lf", pib_per_capita2);

    // Exibição dos resultados das comparações:

    printf("\n\nComparação de cartas: \n");
    printf("População: Carta 1 venceu (%d)\n", resultado_populacao);
    printf("Área: Carta 1 venceu (%d)\n", resultado_area);
    printf("PIB: Carta 1 venceu (%d)\n", resultado_pib);
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", resultado_pontos_turisticos);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultado_densidade_populacional_invertida);
    printf("PIB per capita: Carta 1 venceu (%d)\n", resultado_pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultado_super_poder);    

    return 0;

}
