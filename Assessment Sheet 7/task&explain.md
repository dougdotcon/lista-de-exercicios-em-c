### Explanation of the Concept of Global Variables

**Global variables** are variables that are declared outside of any function and can be accessed and modified by any function within the same file. These variables remain in memory throughout the entire execution of the program, meaning that any changes made to them in one function are preserved and can be seen by other functions.

**Example**:
```c
#include <stdio.h>

int counter = 0;  // Global variable

void increment() {
    counter++;  // Modifies the global variable
}

void showCounter() {
    printf("The value of the counter is: %d\n", counter);  // Accesses the global variable
}

int main() {
    increment();
    increment();
    showCounter();  // Will display 2, as the global variable has been modified
    return 0;
}
```

In this example, `counter` is a global variable, accessed and modified by all the functions.

---

### Vantagens e desvantagens de usar variáveis globais

**Vantagens**:
- Elas podem ser usadas para compartilhar dados entre várias funções sem a necessidade de passar parâmetros.
- Simplificam a comunicação entre funções quando o programa é pequeno.

**Desvantagens**:
- **Difíceis de rastrear**: Se muitas funções modificarem variáveis globais, pode ser difícil identificar onde o valor foi alterado.
- **Dependência**: As funções se tornam dependentes de variáveis externas, o que pode dificultar a manutenção e a reutilização do código.
- **Conflitos de nomes**: Variáveis globais podem ser sobrescritas acidentalmente, levando a erros difíceis de encontrar.

### Código modificado da Folha de Avaliação 5 com funções e variáveis globais

Agora, vamos dividir o código dado em funções, usando variáveis globais para armazenar as leituras de temperatura e outras informações necessárias.

```c

### Tarefa 7:

Para esta tarefa, revisitaremos o código que você escreveu para a Folha de Avaliação 4.

Modifique o seu código da **Folha de Avaliação 4** de modo que:

Quando o usuário inserir sua escolha no menu, o programa chamará uma função que executará a ação solicitada. Por exemplo, se o usuário inserir 'b', o programa deve chamar uma função adequadamente nomeada que executará os passos necessários para atualizar as informações de um estudante. Ou, se o usuário inserir 'd', o programa deve chamar uma função para deletar o registro de um estudante. Em resumo, você estará pegando seu código existente da **Folha de Avaliação 4** e dividindo-o em pelo menos **quatro funções**.

---

### Para atingir a **Nota D**

Complete todas as etapas anteriores e:

1. Certifique-se de que suas funções não tenham valores de retorno e não usem parâmetros nesta etapa.
2. Você precisa fornecer capturas de tela do seu código e das diferentes saídas que ele pode gerar.
3. Seu documento Word deve ter títulos apropriados para garantir que esta tarefa possa ser facilmente identificada ao lado do restante do seu trabalho.

---

### Para atingir a **Nota C**

Complete todas as etapas anteriores e:

4. Modifique o programa para que ele use **parâmetros**.

   a) Anteriormente, você provavelmente colocou todo o código associado a cada escolha do menu dentro de uma função e depois a chamou quando o usuário escolheu essa opção. Agora, vamos refinar isso um pouco para que nossas funções usem parâmetros.

   b) Crie funções de forma que elas não contenham nenhuma instrução `scanf()`. Em vez disso, as funções devem receber os valores de que precisam por meio de parâmetros.

---

### Para atingir a **Nota B**

Complete todas as etapas anteriores e:

5. Modifique o programa da seção da Nota C para que ele use **valores de retorno**:

   a) As funções que gerenciam o código para:

   - Adicionar um novo registro de estudante
   - Atualizar as informações de um estudante
   - Excluir um registro de estudante

   não devem mais conter nenhuma instrução `printf()`. Em vez disso, elas devem retornar os resultados como valores de retorno. A função `main` deve então usar esses valores de retorno para imprimir o resultado na tela.

   b) A função que gerencia a opção **d** ("Exibir detalhes do estudante") ainda pode usar `printf()`.

---

### Para atingir a **Nota A**

Complete todas as etapas anteriores e:

6. Em muitas folhas de avaliação, para alcançar uma nota mais alta, as tarefas exigem alguma pesquisa independente.

   a) Primeiro, pesquise o conceito de **variáveis globais**. Explique este conceito e forneça um exemplo.
   
   b) Reescreva o código que você fez para a **Folha de Avaliação 5**, mas desta vez, divida-o em funções o máximo possível. É provável que você precise de variáveis globais para isso.

---

### Diretrizes de Preparação do Trabalho

- Todos os componentes do relatório devem ser processados em Word (textos manuscritos ou diagramas desenhados à mão não são aceitáveis). O tamanho da fonte deve estar na faixa de 11 a 14, incluindo títulos, corpo do texto e qualquer texto dentro de diagramas.
- Fontes padrão e amplamente usadas, como Times New Roman, Arial ou Calibri, devem ser utilizadas.
- Todas as figuras, gráficos e tabelas devem ser numeradas e rotuladas com explicações curtas.
- Materiais de fontes externas devem ser devidamente reconhecidos e citados dentro do texto, utilizando o sistema de referência Harvard.
- Todos os componentes do trabalho (texto, diagramas, código, etc.) devem ser submetidos em um único arquivo Word.
- O relatório deve ser logicamente estruturado: o núcleo do relatório pode começar definindo o problema/requisitos, seguido pela solução proposta, incluindo discussão detalhada, análise e avaliação, levando à implementação e à etapa de testes, e finalmente uma conclusão e uma reflexão pessoal sobre o aprendizado.
- Capturas de tela sem descrição/discussão não são adequadas, pois não expressam sua compreensão ou suportam adequadamente seu trabalho.

---

### Instruções de Submissão

- Esta é uma tarefa de portfólio com oito tarefas no total. Cada tarefa será completada e salva no portfólio. Uma vez que o portfólio estiver concluído, ele deve ser submetido no Turnitin. O link de submissão para o Turnitin pode ser encontrado na aba "Assessment" na sua seção de módulo no SOL VLE.
- Observe que pode haver limitações de tamanho de arquivo. Seu relatório deve ter menos de 250 MB.
- O código-fonte de cada tarefa deve ser compactado em um arquivo zip e anexado ao relatório Word na submissão.
- O Brief da Tarefa pode ser encontrado na aba "Assessment" na sua seção de módulo no SOL VLE.
- Consulte o Brief da Tarefa para encontrar links para Submissões Atrasadas, Circunstâncias Atenuantes, Conduta Acadêmica, Política de Ética, Marcação de Notas e Orientações para submissão online através do Solent Online Learning (SOL).

---

