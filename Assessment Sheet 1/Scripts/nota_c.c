#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()

// Função para verificar entradas inválidas
int get_positive_input() {
    int value;
    while (1) {
        scanf("%d", &value);
        if (value >= 0)
            return value;
        else
            printf("Por favor, insira um número válido (positivo): ");
    }
}

int main() {
    // Executa o comando chcp 65001 para definir a codificação UTF-8 no terminal
    system("chcp 65001 > nul");

    int running, cycling, swimming, weightlifting, yoga, goal, total_time;

    // Entrada de atividades com tratamento de erros
    printf("Insira o tempo gasto em cada atividade física (em minutos):\n");
    
    printf("Corrida: ");
    running = get_positive_input();
    
    printf("Ciclismo: ");
    cycling = get_positive_input();
    
    printf("Natação: ");
    swimming = get_positive_input();
    
    printf("Levantamento de peso: ");
    weightlifting = get_positive_input();
    
    printf("Ioga: ");
    yoga = get_positive_input();
    
    // Calcular o tempo total
    total_time = running + cycling + swimming + weightlifting + yoga;
    printf("\nResumo das atividades:\n");
    printf("Corrida: %d minutos\n", running);
    printf("Ciclismo: %d minutos\n", cycling);
    printf("Natação: %d minutos\n", swimming);
    printf("Levantamento de peso: %d minutos\n", weightlifting);
    printf("Ioga: %d minutos\n", yoga);
    printf("Tempo total de atividades na semana: %d minutos\n", total_time);

    // Entrada de meta e verificação
    printf("\nDigite sua meta semanal de atividades (em minutos): ");
    goal = get_positive_input();
    
    if (total_time >= goal) {
        printf("\nParabéns! Você atingiu sua meta semanal.\n");
    } else {
        printf("\nVocê não atingiu sua meta semanal. Faltaram %d minutos para alcançar sua meta.\n", goal - total_time);
    }
    
    return 0;
}
