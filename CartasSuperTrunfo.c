#include <stdio.h>

int main() {
    // Definição das variáveis
    int codigo1, codigo2, populacao1, populacao2;
    char nome1[50], nome2[50];
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Cadastro das cidades
    printf("Cadastro de Cidades\n");
    printf("Digite os dados da primeira cidade:\n");
    printf("Código: ");
    scanf("%d", &codigo1);
    printf("Nome: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²):\n"); 
    scanf("%f", &area1);
    printf("PIB (em R$): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nDigite os dados da segunda cidade:\n");
    printf("Código: ");
    scanf("%d", &codigo2);
    printf("Nome: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em R$): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados
    printf("\nDados das Cidades:\n");
    printf("Cidade 1:\n");
    printf("Código: %d\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCidade 2:\n");
    printf("Código: %d\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}

