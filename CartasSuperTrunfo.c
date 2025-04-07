#include <stdio.h>

int main() {
    // Definição das variáveis para cada cidade
    int codigo1, codigo2, população1, população2;
    char nome1[50], nome2[50];
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Cadastro das Cartas
    printf("Cadastro de Cartas de Cidades\n");
    printf("---------------------------------\n");

    printf("Digite os dados da primeira cidade:\n");
    printf("Código: ");
    scanf("%d", &codigo1);
    printf("Nome: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &população1);
    printf("Área (em km²):\n ");
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
    scanf("%d", &população2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em R$): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos Dados das Cartas
    printf("\nDados das Cidades:\n");

    printf("Cidade 1:\n");
    printf("Código: %d\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", população1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCidade 2:\n");
    printf("Código: %d\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    
    return 0;
}

