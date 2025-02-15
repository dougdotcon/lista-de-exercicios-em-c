#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    // Variáveis para armazenar o plano de refeição, itens adicionais, se é para retirada e o custo total
    char selectedPlan = 'S';  // 'S' para Standard, 'V' para Vegetariano, 'F' para Familiar
    int additionalItems = 2;
    char isTakeaway = 'y';    // 'y' para retirada, 'n' para não retirada
    float totalCost = 0.0;

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
