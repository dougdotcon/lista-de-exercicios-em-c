#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Necessário para usar a função system()

// Função para mesclar duas metades
void merge(char *arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Arrays temporários
    char *L[n1], *R[n2];

    // Copia os dados para os arrays temporários
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Mescla os arrays temporários de volta no array original
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (strcmp(L[i], R[j]) <= 0) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função recursiva para o Merge Sort
void mergeSort(char *arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        // Ordena as duas metades
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Mescla as metades ordenadas
        merge(arr, l, m, r);
    }
}

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    // Array com os nomes dos estudantes
    char *studentNames[] = {"Emma", "Sophia", "Liam", "Noah", "Olivia", "Isabella", "Mia", "Charlotte", "Amelia"};
    int n = 9; // Número de estudantes

    // Imprime o array antes da ordenação
    printf("Nomes dos Estudantes (Antes da Ordenação - Merge Sort):\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", studentNames[i]);
    }
    printf("\n");

    // Chama a função mergeSort para ordenar o array
    mergeSort(studentNames, 0, n - 1);

    // Imprime o array após a ordenação completa
    printf("Nomes dos Estudantes (Após o Merge Sort):\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", studentNames[i]);
    }
    printf("\n");

    return 0;
}
