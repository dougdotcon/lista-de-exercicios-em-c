#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()
#include <string.h> // Necessário para usar a função strcspn()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    int plantID = 1;
    char plantName[50], plantSpecies[50], wateringSchedule[50], sunlightRequirements[50];

    // Solicita as informações da planta
    printf("Digite o nome da planta: ");
    fgets(plantName, 50, stdin);
    plantName[strcspn(plantName, "\n")] = '\0'; // Remove a nova linha

    printf("Digite a espécie da planta: ");
    fgets(plantSpecies, 50, stdin);
    plantSpecies[strcspn(plantSpecies, "\n")] = '\0'; // Remove a nova linha

    printf("Digite o cronograma de rega (ex: diário, semanal): ");
    fgets(wateringSchedule, 50, stdin);
    wateringSchedule[strcspn(wateringSchedule, "\n")] = '\0'; // Remove a nova linha

    printf("Digite os requisitos de luz solar (ex: sol pleno, sombra parcial): ");
    fgets(sunlightRequirements, 50, stdin);
    sunlightRequirements[strcspn(sunlightRequirements, "\n")] = '\0'; // Remove a nova linha

    // Exibe as informações da planta adicionada
    printf("\nPlanta adicionada com sucesso!\n");
    printf("ID da Planta: %d\n", plantID);
    printf("Nome: %s\n", plantName);
    printf("Espécie: %s\n", plantSpecies);
    printf("Cronograma de Rega: %s\n", wateringSchedule);
    printf("Requisitos de Luz Solar: %s\n", sunlightRequirements);

    return 0;
}
