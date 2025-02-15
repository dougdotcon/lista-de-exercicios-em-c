### Tarefa 6:

Uma das tarefas comuns que programas de computador precisam realizar é organizar dados em uma ordem específica. Para isso, precisamos de um algoritmo. Um algoritmo é apenas uma solução sistemática para um problema. Para esta tarefa de avaliação, vamos considerar um algoritmo de ordenação simples, e você precisará concluir as tarefas descritas abaixo.

Observe que existem muitos algoritmos de ordenação diferentes disponíveis.

#### Cenário:
Você está trabalhando em um projeto para ajudar uma escola a organizar uma lista de nomes de estudantes para um evento próximo. A escola recebeu uma lista de nomes de estudantes, mas eles estão desordenados. Sua tarefa é implementar um algoritmo de ordenação para organizar os nomes dos estudantes em ordem alfabética.

O algoritmo de ordenação que você implementará no exemplo é uma versão básica do algoritmo de **Bubble Sort**. O **Bubble Sort** é um algoritmo simples de ordenação que percorre repetidamente a lista, compara elementos adjacentes e os troca se estiverem na ordem errada. O processo é repetido até que toda a lista esteja ordenada. Em cada passagem do algoritmo Bubble Sort, o maior elemento "sobe" para sua posição correta, daí o nome **Bubble Sort**.

---

### Para atingir a **Nota D**

Siga os passos abaixo:

- Crie um array `studentNames` que armazene os seguintes nomes: "Emma", "Sophia", "Liam", "Noah", "Olivia", "Isabella", "Mia", "Charlotte", "Amelia".
- Implemente um loop que percorra o array `studentNames`.
- Para cada iteração do loop, imprima dois nomes:
  - O nome armazenado no elemento do array que o loop está percorrendo.
  - O nome armazenado no elemento adjacente do array.

**Exemplo de saída:**
```plaintext
Nome do Estudante: Emma, Nome Adjacente: Sophia
Nome do Estudante: Sophia, Nome Adjacente: Liam
Nome do Estudante: Liam, Nome Adjacente: Noah
```

- Você precisa fornecer capturas de tela do seu código e dos diferentes resultados que ele pode gerar.
- O documento Word deve ter títulos apropriados para garantir que esta tarefa possa ser facilmente identificada junto ao restante do seu trabalho.

---

### Para atingir a **Nota C**

Complete todos os passos anteriores e modifique o programa para ordenar o array da seguinte forma:

- Atualize o loop para verificar se o nome atual sendo acessado é maior do que o nome armazenado na posição adjacente (use comparação de strings). Se for, troque os dois nomes.
- Remova as declarações `print` do loop de ordenação.
- Imprima o array `studentNames` antes e depois do loop para verificar o resultado correto. O estudante cujo nome vem por último em ordem alfabética deve estar no final do array. Note que o restante do array pode não estar na ordem correta.

**Exemplo de como o algoritmo funciona passo a passo:**

Passo 1: Antes da ordenação
```plaintext
Nomes dos Estudantes: Carol, Eve, Bob, David, Alice
```

Passo 2: Primeira passagem
```plaintext
Comparando "Carol" e "Eve": Sem troca ("Carol" < "Eve")
Comparando "Eve" e "Bob": Troca ("Eve" > "Bob")
Comparando "Eve" e "David": Troca ("Eve" > "David")
Comparando "Eve" e "Alice": Troca ("Eve" > "Alice")
```

Nomes dos Estudantes após a primeira passagem:
```plaintext
Carol, Bob, David, Alice, Eve
```

---

### Para atingir a **Nota B**

Complete todos os passos anteriores e modifique o programa para ordenar todo o array `studentNames` usando um loop aninhado da seguinte forma:

- Implemente um loop adicional que percorra o array `studentNames`, comparando cada nome com seu nome adjacente, usando comparação de strings.
- Troque os nomes, se necessário, para ordenar o array em ordem crescente.
- Assim como antes, você deve imprimir o array `studentNames` antes e depois do processo de ordenação para verificar o resultado correto. A conclusão bem-sucedida desta tarefa resultará em um array corretamente ordenado em ordem alfabética.

Todas as tarefas devem ser acompanhadas de descrições ou anotações escritas. Essas descrições devem demonstrar compreensão satisfatória do que o código está fazendo.

---

### Para atingir a **Nota A**

Complete todos os passos anteriores e:

- Para obter uma nota mais alta, as tarefas exigirão alguma pesquisa independente. Existem muitas maneiras de ordenar um array de números. Pesquise diferentes algoritmos de ordenação e implemente um deles (por exemplo, merge sort, insertion sort, quicksort, etc.). Deve ser diferente do algoritmo aplicado anteriormente.
- Nota: Forneça explicações no seu documento Word sobre o algoritmo escolhido, como ele difere do Bubble Sort e como você o implementou no seu código.

---

### Diretrizes de Preparação do Trabalho

- Todos os componentes do relatório devem ser processados em Word. Textos manuscritos ou diagramas desenhados à mão não são aceitáveis.
- O tamanho da fonte deve estar na faixa de 11 a 14, incluindo os títulos, corpo do texto e qualquer texto dentro dos diagramas.
- Fontes padrão e amplamente usadas, como Times New Roman, Arial ou Calibri, devem ser utilizadas.
- Todas as figuras, gráficos e tabelas devem ser numeradas e rotuladas com explicações curtas.
- Materiais de fontes externas devem ser devidamente reconhecidos e citados no texto, utilizando o sistema de referência Solent Harvard.
- Todos os componentes do trabalho (texto, diagramas, código, etc.) devem ser submetidos em um único arquivo Word.
- O relatório deve ser logicamente estruturado: o núcleo do relatório deve começar definindo o problema/requisitos, seguido pela solução proposta, incluindo uma discussão detalhada, análise e avaliação, levando à implementação e estágio de teste. Por fim, deve haver uma conclusão e uma reflexão pessoal sobre o aprendizado.
- Capturas de tela sem descrição/discussão não são adequadas, pois não expressam sua compreensão ou suportam adequadamente seu trabalho.

---

### Instruções de Submissão

- Esta é uma tarefa de portfólio com oito tarefas no total. Cada tarefa será completada e salva no portfólio. Uma vez que o portfólio estiver concluído, ele deve ser submetido no Turnitin. O link de submissão pode ser encontrado na aba "Assessment" na sua seção de módulo no SOL VLE.
- Lembre-se de que pode haver limitações de tamanho de arquivo. Seu relatório deve ter menos de 250 MB.
- O código-fonte de cada tarefa deve ser compactado em um arquivo zip e anexado ao relatório Word na submissão do anexo.
- O Brief da Tarefa pode ser encontrado na aba "Assessment" na sua seção de módulo no SOL VLE.
- Consulte o Brief da Tarefa para encontrar links para Submissões Atrasadas, Circunstâncias Atenuantes, Conduta Acadêmica, Política de Ética, Marcação de Notas e Orientações para submissão online através do Solent Online Learning (SOL).
