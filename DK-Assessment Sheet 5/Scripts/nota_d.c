#include <stdio.h>
#include <stdlib.h> // Para usar a função system()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    int numLeituras;
    int temperaturas[30], ids[30]; // Arrays para temperaturas e IDs

    printf("Digite o número de leituras de temperatura (até 30): ");
    scanf("%d", &numLeituras);

    // Entrada de temperaturas e IDs
    for (int i = 0; i < numLeituras; i++) {
        printf("Digite a leitura de temperatura %d: ", i + 1);
        scanf("%d", &temperaturas[i]);
        ids[i] = i + 1; // Gerar ID baseado na ordem de inserção
    }

    // Exibir todas as leituras com IDs
    printf("\nLeituras de Temperatura:\n");
    for (int i = 0; i < numLeituras; i++) {
        printf("ID: %d, Temperatura: %d°C\n", ids[i], temperaturas[i]);
    }

    return 0;
}
