#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()

int main() {
    // Configura o terminal para UTF-8
    system("chcp 65001 > nul");

    float celsius, fahrenheit;

    // Solicita a entrada da temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Converte Celsius para Fahrenheit
    fahrenheit = celsius * 9 / 5 + 32;

    // Exibe o resultado da conversão
    printf("%.2f Celsius é igual a %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
