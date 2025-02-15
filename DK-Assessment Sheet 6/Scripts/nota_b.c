#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Necessário para usar a função system()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    // Array com os nomes dos estudantes
    char *studentNames[] = {"Emma", "Sophia", "Liam", "Noah", "Olivia", "Isabella", "Mia", "Charlotte", "Amelia"};
    int n = 9; // Número de estudantes

    // Imprime o array antes da ordenação
    printf("Nomes dos Estudantes (Antes da Ordenação):\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", studentNames[i]);
    }
    printf("\n");

    // Bubble Sort completo
    for (int pass = 0; pass < n - 1; pass++) {
        for (int i = 0; i < n - 1 - pass; i++) {
            if (strcmp(studentNames[i], studentNames[i + 1]) > 0) {
                // Troca os nomes se o nome atual for maior que o próximo
                char *temp = studentNames[i];
                studentNames[i] = studentNames[i + 1];
                studentNames[i + 1] = temp;
            }
        }
    }

    // Imprime o array após a ordenação completa
    printf("Nomes dos Estudantes (Após o Bubble Sort completo):\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", studentNames[i]);
    }
    printf("\n");

    return 0;
}
