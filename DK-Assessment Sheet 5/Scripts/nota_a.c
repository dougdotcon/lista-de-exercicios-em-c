#include <stdio.h>
#include <stdlib.h> // Para usar a função system()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    int numLeituras;
    int temperaturas[30], ids[30];
    float soma = 0;
    int opcao;  // Variável para capturar a opção do menu

    printf("Digite o número de leituras de temperatura (até 30): ");
    scanf("%d", &numLeituras);

    // Entrada de temperaturas e IDs
    for (int i = 0; i < numLeituras; i++) {
        printf("Digite a leitura de temperatura %d: ", i + 1);
        scanf("%d", &temperaturas[i]);
        ids[i] = i + 1;
        soma += temperaturas[i];  // Soma das temperaturas para cálculo da média
    }

    // Menu
    do {
        printf("\nMenu:\n");
        printf("1. Exibir todas as leituras\n");
        printf("2. Exibir estatísticas (média, maior e menor)\n");
        printf("3. Contar dias acima de certa temperatura\n");
        printf("4. Contar dias abaixo de certa temperatura\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        
        // Use scanf para capturar a opção do menu
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:  // Exibir todas as leituras
                printf("\nLeituras de Temperatura:\n");
                for (int i = 0; i < numLeituras; i++) {
                    printf("ID: %d, Temperatura: %d°C\n", ids[i], temperaturas[i]);
                }
                break;

            case 2: {  // Exibir estatísticas
                int maior = temperaturas[0], menor = temperaturas[0];
                for (int i = 1; i < numLeituras; i++) {
                    if (temperaturas[i] > maior) maior = temperaturas[i];
                    if (temperaturas[i] < menor) menor = temperaturas[i];
                }
                printf("\nMédia das temperaturas: %.2f°C\n", soma / numLeituras);
                printf("Maior temperatura: %d°C\n", maior);
                printf("Menor temperatura: %d°C\n", menor);
                break;
            }

            case 3: {  // Contar dias acima de certa temperatura
                int limite, contagem = 0;
                printf("Digite o limite de temperatura: ");
                scanf("%d", &limite);
                for (int i = 0; i < numLeituras; i++) {
                    if (temperaturas[i] > limite) contagem++;
                }
                printf("Dias acima de %d°C: %d\n", limite, contagem);
                break;
            }

            case 4: {  // Contar dias abaixo de certa temperatura
                int limite, contagem = 0;
                printf("Digite o limite de temperatura: ");
                scanf("%d", &limite);
                for (int i = 0; i < numLeituras; i++) {
                    if (temperaturas[i] < limite) contagem++;
                }
                printf("Dias abaixo de %d°C: %d\n", limite, contagem);
                break;
            }

            case 5:  // Sair
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}
