#include <stdio.h>
#include <stdlib.h> // Necessário para usar a função system()

int main() {
    // Executa o comando chcp 65001 para definir a codificação UTF-8 no terminal
    system("chcp 65001 > nul");

    // Variáveis para armazenar o tempo em minutos de cada atividade
    int running = 30, cycling = 45, swimming = 60, weightlifting = 50, yoga = 40;
    
    // Calculando o tempo total de atividades
    int total_time = running + cycling + swimming + weightlifting + yoga;
    
    // Imprimindo o tempo total de atividades semanais
    printf("Tempo total de atividades semanais: %d minutos\n", total_time);
    
    return 0;
}
