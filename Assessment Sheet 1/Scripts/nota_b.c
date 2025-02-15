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
            printf("Por favor, insira um número positivo: ");
    }
}

// Função para calcular a diferença percentual
float calculate_percentage_difference(int week1, int week2) {
    if (week1 == 0) return 100.0 * week2;
    return 100.0 * (week2 - week1) / week1;
}

int main() {
    // Executa o comando chcp 65001 para definir a codificação UTF-8 no terminal
    system("chcp 65001 > nul");

    int running[2], cycling[2], swimming[2], weightlifting[2], yoga[2], total_time[2], goal;
    float percentage_difference;

    // Entrada de atividades para duas semanas
    for (int week = 0; week < 2; week++) {
        printf("Semana %d:\n", week + 1);

        printf("Digite o tempo gasto em corrida (minutos): ");
        running[week] = get_positive_input();
        
        printf("Digite o tempo gasto em ciclismo (minutos): ");
        cycling[week] = get_positive_input();
        
        printf("Digite o tempo gasto em natação (minutos): ");
        swimming[week] = get_positive_input();
        
        printf("Digite o tempo gasto em levantamento de peso (minutos): ");
        weightlifting[week] = get_positive_input();
        
        printf("Digite o tempo gasto em ioga (minutos): ");
        yoga[week] = get_positive_input();
        
        // Calcular o tempo total para a semana
        total_time[week] = running[week] + cycling[week] + swimming[week] + weightlifting[week] + yoga[week];
        printf("Tempo total na semana %d: %d minutos\n", week + 1, total_time[week]);
    }

    // Entrada de meta semanal
    printf("Digite sua meta semanal de atividades (minutos): ");
    goal = get_positive_input();

    // Verificação da meta para cada semana
    for (int week = 0; week < 2; week++) {
        if (total_time[week] >= goal) {
            printf("Semana %d: Meta atingida!\n", week + 1);
        } else {
            printf("Semana %d: Meta não atingida. Faltaram %d minutos.\n", week + 1, goal - total_time[week]);
        }
    }

    // Comparação entre as semanas
    percentage_difference = calculate_percentage_difference(total_time[0], total_time[1]);
    if (percentage_difference > 0) {
        printf("A atividade aumentou em %.2f%% na segunda semana.\n", percentage_difference);
    } else if (percentage_difference < 0) {
        printf("A atividade diminuiu em %.2f%% na segunda semana.\n", -percentage_difference);
    } else {
        printf("A atividade permaneceu a mesma nas duas semanas.\n");
    }

    return 0;
}
