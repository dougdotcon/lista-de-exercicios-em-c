#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    float temperature, convertedTemperature;
    char choice, continuar;
    int count = 0;

    // Loop do-while para executar a lógica ao menos uma vez
    do {
        // Solicita a direção da conversão
        printf("Escolha a conversão:\n");
        printf("'C' para converter Celsius para Fahrenheit\n");
        printf("'F' para converter Fahrenheit para Celsius\n");
        scanf(" %c", &choice);

        if (choice == 'C' || choice == 'c') {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperature);

            // Converte Celsius para Fahrenheit
            convertedTemperature = temperature * 9 / 5 + 32;

            // Exibe o resultado
            printf("%.2f Celsius é igual a %.2f Fahrenheit\n", temperature, convertedTemperature);

            // Indica se a temperatura está acima ou abaixo do ponto de congelamento
            if (convertedTemperature < 32) {
                printf("Está abaixo do ponto de congelamento de 32°F.\n");
            } else {
                printf("Está acima do ponto de congelamento de 32°F.\n");
            }

        } else if (choice == 'F' || choice == 'f') {
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperature);

            // Converte Fahrenheit para Celsius
            convertedTemperature = (temperature - 32) * 5 / 9;

            // Exibe o resultado
            printf("%.2f Fahrenheit é igual a %.2f Celsius\n", temperature, convertedTemperature);

            // Indica se a temperatura está acima ou abaixo do ponto de congelamento
            if (convertedTemperature < 0) {
                printf("Está abaixo do ponto de congelamento de 0°C.\n");
            } else {
                printf("Está acima do ponto de congelamento de 0°C.\n");
            }
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }

        // Incrementa o contador de conversões
        count++;

        // Pergunta ao usuário se deseja continuar
        printf("Deseja converter outra temperatura? (y/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 'y');

    // Exibe o número total de conversões
    printf("Você converteu %d temperaturas.\n", count);

    return 0;
}
