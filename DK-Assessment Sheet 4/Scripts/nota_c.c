#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()
#include <string.h> // Necessário para usar a função strcspn()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    int plantID = 1;
    char plantName[50], plantSpecies[50], wateringSchedule[50], sunlightRequirements[50];
    char searchName[50];
    char updateOption;
    int updateID;

    // Adiciona uma nova planta
    printf("Digite o nome da planta: ");
    fgets(plantName, 50, stdin);
    plantName[strcspn(plantName, "\n")] = '\0';

    printf("Digite a espécie da planta: ");
    fgets(plantSpecies, 50, stdin);
    plantSpecies[strcspn(plantSpecies, "\n")] = '\0';

    printf("Digite o cronograma de rega (ex: diário, semanal): ");
    fgets(wateringSchedule, 50, stdin);
    wateringSchedule[strcspn(wateringSchedule, "\n")] = '\0';

    printf("Digite os requisitos de luz solar (ex: sol pleno, sombra parcial): ");
    fgets(sunlightRequirements, 50, stdin);
    sunlightRequirements[strcspn(sunlightRequirements, "\n")] = '\0';

    // Exibe as informações da planta adicionada
    printf("\nPlanta adicionada com sucesso!\n");
    printf("ID da Planta: %d\n", plantID);
    printf("Nome: %s\n", plantName);
    printf("Espécie: %s\n", plantSpecies);
    printf("Cronograma de Rega: %s\n", wateringSchedule);
    printf("Requisitos de Luz Solar: %s\n", sunlightRequirements);

    // Atualizar planta
    printf("\nDeseja atualizar alguma planta? (Digite o ID ou 0 para não): ");
    scanf("%d", &updateID);
    getchar();  // Consome a nova linha deixada pelo scanf

    if (updateID == plantID) {
        printf("O que deseja atualizar?\n");
        printf("a. Nome\nb. Espécie\nc. Cronograma de Rega\nd. Requisitos de Luz Solar\nEscolha: ");
        scanf(" %c", &updateOption);
        getchar();  // Consome a nova linha

        switch (updateOption) {
            case 'a':
                printf("Digite o novo nome da planta: ");
                fgets(plantName, 50, stdin);
                plantName[strcspn(plantName, "\n")] = '\0';
                break;
            case 'b':
                printf("Digite a nova espécie da planta: ");
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
    } else if (updateID != 0) {
        printf("Planta com ID %d não encontrada.\n", updateID);
    }

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

    return 0;
}
