#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()
#include <string.h> // Necessário para usar a função strcspn()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    int plantID = 1;
    char *plantName = (char *)malloc(50 * sizeof(char));
    char *plantSpecies = (char *)malloc(50 * sizeof(char));
    char *wateringSchedule = (char *)malloc(50 * sizeof(char));
    char *sunlightRequirements = (char *)malloc(50 * sizeof(char));
    char *searchName = (char *)malloc(50 * sizeof(char));
    char menuOption, updateOption;
    int updateID;
    int isRunning = 1;

    while (isRunning) {
        printf("\nMenu:\n");
        printf("a. Adicionar uma nova planta\n");
        printf("b. Atualizar informações da planta\n");
        printf("c. Pesquisar uma planta\n");
        printf("y. Sair\n");
        printf("Escolha uma opção: ");
        scanf(" %c", &menuOption);
        getchar();  // Consome a nova linha

        switch (menuOption) {
            case 'a':
            case 'A':
                // Adicionar planta
                printf("Digite o nome da planta: ");
                fgets(plantName, 50, stdin);
                plantName[strcspn(plantName, "\n")] = '\0';

                printf("Digite a espécie da planta: ");
                fgets(plantSpecies, 50, stdin);
                plantSpecies[strcspn(plantSpecies, "\n")] = '\0';

                printf("Digite o cronograma de rega: ");
                fgets(wateringSchedule, 50, stdin);
                wateringSchedule[strcspn(wateringSchedule, "\n")] = '\0';

                printf("Digite os requisitos de luz solar: ");
                fgets(sunlightRequirements, 50, stdin);
                sunlightRequirements[strcspn(sunlightRequirements, "\n")] = '\0';

                printf("\nPlanta adicionada com sucesso!\n");
                printf("ID da Planta: %d\n", plantID);
                break;

            case 'b':
            case 'B':
                // Atualizar planta
                printf("Digite o ID da planta para atualizar: ");
                scanf("%d", &updateID);
                getchar();  // Consome a nova linha

                if (updateID == plantID) {
                    printf("O que deseja atualizar?\n");
                    printf("a. Nome\nb. Espécie\nc. Cronograma de Rega\nd. Requisitos de Luz Solar\nEscolha: ");
                    scanf(" %c", &updateOption);
                    getchar();  // Consome a nova linha

                    switch (updateOption) {
                        case 'a':
                            printf("Digite o novo nome: ");
                            fgets(plantName, 50, stdin);
                            plantName[strcspn(plantName, "\n")] = '\0';
                            break;
                        case 'b':
                            printf("Digite a nova espécie: ");
                            fgets(plantSpecies, 50, stdin);
                            plantSpecies[strcspn(plantSpecies, "\n")] = '\0';
                            break;
                        case 'c':
                            printf("Digite o novo cronograma de rega: ");
                            fgets(wateringSchedule, 50, stdin);
                            wateringSchedule[strcspn(wateringSchedule, "\n")] = '\0';
                            break;
                        case 'd':
                            printf("Digite os novos requisitos de luz solar: ");
                            fgets(sunlightRequirements, 50, stdin);
                            sunlightRequirements[strcspn(sunlightRequirements, "\n")] = '\0';
                            break;
                        default:
                            printf("Opção inválida.\n");
                            break;
                    }
                    printf("\nPlanta atualizada com sucesso!\n");
                } else {
                    printf("Planta com ID %d não encontrada.\n", updateID);
                }
                break;

            case 'c':
            case 'C':
                // Pesquisar planta
                printf("\nDigite o nome da planta para pesquisar: ");
                fgets(searchName, 50, stdin);
                searchName[strcspn(searchName, "\n")] = '\0';

                if (strcmp(searchName, plantName) == 0) {
                    printf("\nPlanta encontrada!\n");
                    printf("ID da Planta: %d\n", plantID);
                    printf("Nome: %s\n", plantName);
                    printf("Espécie: %s\n", plantSpecies);
                    printf("Cronograma de Rega: %s\n", wateringSchedule);
                    printf("Requisitos de Luz Solar: %s\n", sunlightRequirements);
                } else {
                    printf("Planta não encontrada.\n");
                }
                break;

            case 'y':
            case 'Y':
                isRunning = 0;
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Entrada inválida. Por favor, insira a, b, c ou y.\n");
                break;
        }
    }

    // Libera memória alocada
    free(plantName);
    free(plantSpecies);
    free(wateringSchedule);
    free(sunlightRequirements);
    free(searchName);

    return 0;
}
