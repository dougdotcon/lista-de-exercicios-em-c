#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    // Array com os nomes dos estudantes
    char *studentNames[] = {"Emma", "Sophia", "Liam", "Noah", "Olivia", "Isabella", "Mia", "Charlotte", "Amelia"};
    int n = 9; // Número de estudantes

    // Loop para imprimir o nome do estudante e o nome adjacente
    for (int i = 0; i < n - 1; i++) {
        printf("Nome do Estudante: %s, Nome Adjacente: %s\n", studentNames[i], studentNames[i + 1]);
    }

    return 0;
}
