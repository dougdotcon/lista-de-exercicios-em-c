#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()
#include <string.h> // Necessário para usar a função strcspn()

// Variáveis globais
int plantID = 1;

// Função para adicionar planta
void adicionarPlanta(char *name, char *species, char *schedule, char *sunlight) {
    printf("\nPlanta adicionada com sucesso!\n");
    printf("ID da Planta: %d\n", plantID);
    printf("Nome: %s\n", name);
    printf("Espécie: %s\n", species);
    printf("Cronograma de Rega: %s\n", schedule);
    printf("Requisitos de Luz Solar: %s\n", sunlight);
}

// Função para atualizar planta
void atualizarPlanta(int updateID, char *name, char *species, char *schedule, char *sunlight, char updateOption) {
    if (updateID == plantID) {
        switch (updateOption) {
            case 'a':
                printf("\nNome atualizado para: %s\n", name);
                break;
            case 'b':
                printf("\nEspécie atualizada para: %s\n", species);
                break;
            case 'c':
                printf("\nCronograma de Rega atualizado para: %s\n", schedule);
                break;
            case 'd':
                printf("\nRequisitos de Luz Solar atualizados para: %s\n", sunlight);
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
        printf("Planta atualizada com sucesso!\n");
    } else {
        printf("Planta com ID %d não encontrada.\n", updateID);
    }
}

// Função para pesquisar planta
void pesquisarPlanta(char *searchName, char *plantName, char *plantSpecies, char *wateringSchedule, char *sunlightRequirements) {
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
}

// Função para sair do programa
void sairPrograma() {
    printf("Saindo do programa...\n");
}

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    // Aloca memória para as strings
    char *plantName = (char *)malloc(50 * sizeof(char));
    char *plantSpecies = (char *)malloc(50 * sizeof(char));
    char *wateringSchedule = (char *)malloc(50 * sizeof(char));
    char *sunlightRequirements = (char *)malloc(50 * sizeof(char));
    char *searchName = (char *)malloc(50 * sizeof(char));
    
    char menuOption, updateOption;
    int isRunning = 1;
    int updateID;

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
                // Coletando informações do usuário no main()
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

                // Chama a função com os parâmetros coletados
                adicionarPlanta(plantName, plantSpecies, wateringSchedule, sunlightRequirements);
                break;

            case 'b':
            case 'B':
                // Coletando ID e opção de atualização
                printf("Digite o ID da planta para atualizar: ");
                scanf("%d", &updateID);
                getchar();  // Consome a nova linha

                printf("O que deseja atualizar?\n");
                printf("a. Nome\nb. Espécie\nc. Cronograma de Rega\nd. Requisitos de Luz Solar\nEscolha: ");
                scanf(" %c", &updateOption);
                getchar();  // Consome a nova linha

                // Se necessário, coletando novos dados
                if (updateOption == 'a') {
                    printf("Digite o novo nome: ");
                    fgets(plantName, 50, stdin);
                    plantName[strcspn(plantName, "\n")] = '\0';
                } else if (updateOption == 'b') {
                    printf("Digite a nova espécie: ");
                    fgets(plantSpecies, 50, stdin);
                    plantSpecies[strcspn(plantSpecies, "\n")] = '\0';
                } else if (updateOption == 'c') {
                    printf("Digite o novo cronograma de rega: ");
                    fgets(wateringSchedule, 50, stdin);
                    wateringSchedule[strcspn(wateringSchedule, "\n")] = '\0';
                } else if (updateOption == 'd') {
                    printf("Digite os novos requisitos de luz solar: ");
                    fgets(sunlightRequirements, 50, stdin);
                    sunlightRequirements[strcspn(sunlightRequirements, "\n")] = '\0';
                }

                // Chama a função com os parâmetros coletados
                atualizarPlanta(updateID, plantName, plantSpecies, wateringSchedule, sunlightRequirements, updateOption);
                break;

            case 'c':
            case 'C':
                // Coletando o nome para pesquisa
                printf("\nDigite o nome da planta para pesquisar: ");
                fgets(searchName, 50, stdin);
                searchName[strcspn(searchName, "\n")] = '\0';

                // Chama a função de pesquisa
                pesquisarPlanta(searchName, plantName, plantSpecies, wateringSchedule, sunlightRequirements);
                break;

            case 'y':
            case 'Y':
                isRunning = 0;
                sairPrograma();
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
