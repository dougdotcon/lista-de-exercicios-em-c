
### Tarefa 5: Analisador de dados climáticos

Nesta tarefa, você criará um programa que ajuda a analisar leituras diárias de temperatura para um determinado período. O programa utilizará arrays e várias operações para calcular estatísticas e fornecer insights sobre os dados de temperatura.

- Solicite ao usuário que insira o número de leituras de temperatura (até 30).
- Crie dois arrays paralelos: um para armazenar as leituras de temperatura e outro para armazenar os IDs de temperatura correspondentes (números inteiros). Certifique-se de que os arrays tenham espaço suficiente para acomodar o número especificado de leituras.
- Permita que o usuário insira as leituras de temperatura e os IDs um por um, armazenando-os nos arrays.

O programa oferecerá um menu com as seguintes opções:

- Exibir todas as leituras de temperatura. Liste todas as leituras inseridas de forma amigável.
- Calcular e exibir a temperatura média.
- Calcular e exibir a temperatura mais alta.
- Calcular e exibir a temperatura mais baixa.
- Contar o número de dias acima de uma determinada temperatura (por exemplo, 15°C).
- Contar o número de dias abaixo de uma determinada temperatura (por exemplo, 5°C).
- Sair.

#### Exemplo de como o programa deve se comportar:

1. **Entrada de leituras de temperatura:**
   - O usuário seleciona a opção A.
   - O usuário insere o número de leituras de temperatura que deseja inserir: 5.
   - O usuário insere as leituras de temperatura uma por uma: 34, 12, -3, 4, 17.
   - O programa reconhece as leituras e as armazena.
   - O programa gera um ID exclusivo para cada leitura e armazena tanto o ID quanto a leitura em arrays paralelos.

2. **Exibir todas as temperaturas:**
   - O usuário seleciona a opção B.
   - O programa exibe todas as leituras de temperatura inseridas com seus respectivos IDs.

3. **Calcular e exibir estatísticas:**
   - O usuário seleciona a opção C.
   - O programa calcula e exibe as estatísticas: a média, a maior e a menor temperatura das leituras inseridas.

4. **Exibir resultados da análise:**
   - O usuário seleciona a opção D.
   - O programa conta e exibe o número de dias com temperaturas acima e abaixo de certos limites especificados.

---

Para atingir a **Nota D**:

1. Forneça capturas de tela do seu código e das diferentes saídas que ele pode gerar.
2. Seu documento Word deve ter títulos adequados para garantir que esta tarefa possa ser facilmente identificada ao lado do restante do seu trabalho.
3. O programa deve funcionar da seguinte maneira:
   - Obtenha a escolha do menu do usuário via teclado.
   - Se o usuário selecionar 'A', peça ao usuário para inserir o número de leituras de temperatura que deseja inserir e, em seguida, peça para inserir cada leitura de temperatura, armazenando-as em um array. O programa gera um ID exclusivo para cada leitura e armazena tanto o ID quanto a leitura em arrays paralelos.
   - Se o usuário selecionar 'B', exiba todas as leituras de temperatura inseridas com seus respectivos IDs.

---

Para atingir a **Nota C**:

4. Complete todas as etapas anteriores e modifique o programa para que funcione da seguinte forma:
   - Adicione uma opção 'C' ao menu para calcular e exibir estatísticas com base nas leituras de temperatura inseridas, incluindo a temperatura média, a maior e a menor.
   - Modifique o programa para lidar com várias localizações. O programa deve continuar solicitando ao usuário que insira leituras de temperatura para diferentes localizações até que o usuário escolha sair.
   - Adicione "X - Sair" ao menu:
     - O programa inteiro deve estar em um loop para que, uma vez que o usuário tenha realizado uma ação, o programa exiba o menu novamente e permita ao usuário selecionar outra opção. O programa deve terminar apenas se o usuário inserir X como sua escolha no menu.
     - Se o usuário inserir uma escolha de menu inválida, ele deve ser informado do erro.

---

Para atingir a **Nota B**:

5. Complete todas as etapas anteriores e modifique o programa para funcionar da seguinte forma:
   - Adicione uma opção 'D' ao menu para exibir resultados adicionais de análise, incluindo o seguinte:
     - Número de leituras acima de um certo limite (por exemplo, acima de 15°C).
     - Número de leituras abaixo de um certo limite (por exemplo, abaixo de 5°C).
   - Modifique o programa para que, antes do menu ser exibido, o usuário seja obrigado a inserir leituras de temperatura.
   - Peça ao usuário quantas leituras de temperatura ele deseja inserir (até 30).
   - Em seguida, peça ao usuário que insira cada valor e adicione-os ao array de temperaturas.
   - Use um terminador específico (por exemplo, '999') para indicar o fim da entrada. Certifique-se de que o programa inclua um loop FOR para processar as entradas e pare de aceitar entradas quando o valor do terminador for inserido.
   - O programa deve funcionar como antes, mas certifique-se de que todas as ações do menu funcionem com as leituras inseridas.

---

Para atingir a **Nota A**:

7. Complete todas as etapas anteriores e:
   - Realize uma pesquisa independente sobre abordagens alternativas e explique-as.
   - Para a escolha do menu, receba a entrada dos usuários usando a função `getchar()` em vez de `scanf()`. Investigue a função `getchar()`, demonstre e explique-a.

---

## Diretrizes de Preparação do Trabalho

- Todos os componentes do relatório devem ser processados em Word.
- O tamanho da fonte deve estar na faixa de 11 a 14 pontos, incluindo títulos, corpo do texto e qualquer texto dentro de diagramas.
- O relatório deve ser logicamente estruturado, começando pela definição do problema/requisitos, seguido pela solução proposta, implementação, teste e conclusão.

