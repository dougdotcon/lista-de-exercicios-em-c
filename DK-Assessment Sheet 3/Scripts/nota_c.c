#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    float celsius, fahrenheit;
    char continuar = 'y';
    int count = 0;

    // Loop que permite múltiplas conversões
    while (continuar == 'y') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &celsius);

        // Converte Celsius para Fahrenheit
        fahrenheit = celsius * 9 / 5 + 32;

        // Exibe o resultado
        printf("%.2f Celsius é igual a %.2f Fahrenheit\n", celsius, fahrenheit);

        // Incrementa o contador de conversões
        count++;

        // Pergunta ao usuário se deseja continuar
        printf("Deseja converter outra temperatura? (y/n): ");
        scanf(" %c", &continuar);
    }

    // Exibe o número total de conversões
    printf("Você converteu %d temperaturas.\n", count);

    return 0;
}
