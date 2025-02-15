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

    // Entrada do plano de refeição
    printf("Selecione um plano de refeição ('S' para Standard, 'V' para Vegetariano, 'F' para Familiar): ");
    scanf(" %c", &selectedPlan);

    // Entrada dos itens adicionais
    printf("Insira o número de itens adicionais: ");
    scanf("%d", &additionalItems);

    // Entrada se o pedido é para retirada
    printf("O pedido é para retirada? (y/n): ");
    scanf(" %c", &isTakeaway);

    // Cálculo do custo com base no plano de refeição
    if (selectedPlan == 'S') {
        totalCost = 7.99;
    } else if (selectedPlan == 'V') {
        totalCost = 6.99;
    } else if (selectedPlan == 'F') {
        totalCost = 29.99;
    }

    // Adiciona o custo dos itens adicionais
    totalCost += additionalItems * 1.99;

    // Aplica desconto de 5% se for retirada
    if (isTakeaway == 'y') {
        totalCost *= 0.95;
    }

    // Exibe o resultado
    printf("Plano de refeição: %c\n", selectedPlan);
    printf("Itens adicionais: %d\n", additionalItems);
    printf("Retirada: %s\n", isTakeaway == 'y' ? "Sim" : "Não");
    printf("Custo total do pedido: £%.2f\n", totalCost);

    return 0;
}
