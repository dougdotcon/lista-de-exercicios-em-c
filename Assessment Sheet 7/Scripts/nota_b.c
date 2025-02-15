#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar uma planta
typedef struct {
    int id;
    char name[50];
    char species[50];
    char wateringSchedule[50];
    char sunlightRequirements[50];
} Plant;

// Função para adicionar uma planta
Plant adicionarPlanta(char *name, char *species, char *schedule, char *sunlight) {
    Plant newPlant;
    newPlant.id = 1; // ID fixo para simplificar o exemplo
    strcpy(newPlant.name, name);
    strcpy(newPlant.species, species);
    strcpy(newPlant.wateringSchedule, schedule);
    strcpy(newPlant.sunlightRequirements, sunlight);
    return newPlant;
}

// Função para atualizar uma planta
int atualizarPlanta(Plant *plant, char updateOption, char *newValue) {
    if (plant->id == 1) {  // Simulando uma planta com ID 1
        switch (updateOption) {
            case 'a':
                strcpy(plant->name, newValue);
                return 1;  // Sucesso
            case 'b':
                strcpy(plant->species, newValue);
                return 1;  // Sucesso
            case 'c':
                strcpy(plant->wateringSchedule, newValue);
                return 1;  // Sucesso
            case 'd':
                strcpy(plant->sunlightRequirements, newValue);
                return 1;  // Sucesso
            default:
                return 0;  // Falha
        }
    }
    return 0;  // Planta não encontrada
}

// Função para deletar uma planta
int excluirPlanta(Plant *plant) {
    if (plant->id == 1) {  // Simulando exclusão de uma planta com ID 1
        plant->id = 0;  // Invalida o ID para simular exclusão
        return 1;  // Sucesso
    }
    return 0;  // Falha
}

// Função para exibir detalhes da planta (pode usar printf)
void exibirDetalhesPlanta(Plant plant) {
    if (plant.id != 0) {
        printf("\nPlanta encontrada!\n");
        printf("ID da Planta: %d\n", plant.id);
        printf("Nome: %s\n", plant.name);
        printf("Espécie: %s\n", plant.species);
        printf("Cronograma de Rega: %s\n", plant.wateringSchedule);
        printf("Requisitos de Luz Solar: %s\n", plant.sunlightRequirements);
    } else {
        printf("Planta não encontrada.\n");
    }
}

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    // Criando uma instância de Plant
    Plant minhaPlanta;
    
    char menuOption, updateOption;
    int isRunning = 1;
    int result;

    while (isRunning) {
        printf("\nMenu:\n");
        printf("a. Adicionar uma nova planta\n");
        printf("b. Atualizar informações da planta\n");
        printf("c. Excluir uma planta\n");
        printf("d. Exibir detalhes da planta\n");
        printf("y. Sair\n");
        printf("Escolha uma opção: ");
        scanf(" %c", &menuOption);
        getchar();  // Consome a nova linha

        switch (menuOption) {
            case 'a':
            case 'A': {
                // Coletando informações para adicionar a planta
                char name[50], species[50], wateringSchedule[50], sunlightRequirements[50];
                printf("Digite o nome da planta: ");
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = '\0';

                printf("Digite a espécie da planta: ");
                fgets(species, 50, stdin);
                species[strcspn(species, "\n")] = '\0';

                printf("Digite o cronograma de rega: ");
                fgets(wateringSchedule, 50, stdin);
                wateringSchedule[strcspn(wateringSchedule, "\n")] = '\0';

                printf("Digite os requisitos de luz solar: ");
                fgets(sunlightRequirements, 50, stdin);
                sunlightRequirements[strcspn(sunlightRequirements, "\n")] = '\0';

                // Chama a função para adicionar a planta e armazena o retorno
                minhaPlanta = adicionarPlanta(name, species, wateringSchedule, sunlightRequirements);
                printf("Planta adicionada com sucesso! ID: %d\n", minhaPlanta.id);
                break;
            }

            case 'b':
            case 'B': {
                // Coletando opção de atualização e o novo valor
                printf("O que deseja atualizar?\n");
                printf("a. Nome\nb. Espécie\nc. Cronograma de Rega\nd. Requisitos de Luz Solar\nEscolha: ");
                scanf(" %c", &updateOption);
                getchar();  // Consome a nova linha

                char newValue[50];
                printf("Digite o novo valor: ");
                fgets(newValue, 50, stdin);
                newValue[strcspn(newValue, "\n")] = '\0';

                // Chama a função para atualizar e usa o retorno para exibir resultado
                result = atualizarPlanta(&minhaPlanta, updateOption, newValue);
                if (result) {
                    printf("Planta atualizada com sucesso!\n");
                } else {
                    printf("Falha ao atualizar a planta.\n");
                }
                break;
            }

            case 'c':
            case 'C':
                // Chama a função para excluir a planta e usa o retorno
                result = excluirPlanta(&minhaPlanta);
                if (result) {
                    printf("Planta excluída com sucesso!\n");
                } else {
                    printf("Falha ao excluir a planta.\n");
                }
                break;

            case 'd':
            case 'D':
                // Chama a função para exibir os detalhes da planta
                exibirDetalhesPlanta(minhaPlanta);
                break;

            case 'y':
            case 'Y':
                isRunning = 0;
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Entrada inválida. Por favor, insira a, b, c, d ou y.\n");
                break;
        }
    }

    return 0;
}
