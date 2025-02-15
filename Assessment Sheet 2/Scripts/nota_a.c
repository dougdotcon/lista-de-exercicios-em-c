#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    // Variáveis para armazenar o plano de refeição, itens adicionais, se é para retirada e o custo total
    char selectedPlan;
    int additionalItems;
    char isTakeaway;
    float totalCost = 0.0;
    int customItems = 0;
    float customItemCost = 0.0;
    float customItemTotalCost = 0.0;

    // Entrada do plano de refeição
    printf("Selecione um plano de refeição ('S' para Standard, 'V' para Vegetariano, 'F' para Familiar): ");
    scanf(" %c", &selectedPlan);

    switch (selectedPlan) {
        case 'S':
            totalCost = 7.99;
            break;
        case 'V':
            totalCost = 6.99;
            break;
        case 'F':
            totalCost = 29.99;
            totalCost *= 0.90;  // Desconto de 10% para o plano familiar
            break;
        default:
            printf("Plano de refeição inválido.\n");
            return 1;
    }

    // Entrada dos itens adicionais
    printf("Insira o número de itens adicionais: ");
    scanf("%d", &additionalItems);
    totalCost += additionalItems * 1.99;

    // Entrada se o pedido é para retirada
    printf("O pedido é para retirada? (y/n): ");
    scanf(" %c", &isTakeaway);

    // Entrada de itens personalizados
    printf("Quantos itens personalizados você quer adicionar (máximo 2)? ");
    scanf("%d", &customItems);

    for (int i = 1; i <= customItems; i++) {
        char customItemName[30];
        printf("Digite o nome do item personalizado %d: ", i);
        scanf("%s", customItemName);
        printf("Digite o custo do %s: £", customItemName);
        scanf("%f", &customItemCost);
        customItemTotalCost += customItemCost;
    }

    // Adiciona o custo dos itens personalizados
    totalCost += customItemTotalCost;

    // Aplica desconto de 5% se for retirada
    if (isTakeaway == 'y') {
        totalCost *= 0.95;
    }

    // Exibe o resultado
    printf("Plano de refeição: %c\n", selectedPlan);
    printf("Itens adicionais: %d\n", additionalItems);
    printf("Retirada: %s\n", isTakeaway == 'y' ? "Sim" : "Não");
    printf("Custo total dos itens personalizados: £%.2f\n", customItemTotalCost);
    printf("Custo total do pedido: £%.2f\n", totalCost);

    return 0;
}
