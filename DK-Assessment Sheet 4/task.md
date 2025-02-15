### **Tarefa 4: Sistema inteligente de cuidado com plantas**

Nesta tarefa, você deverá criar um programa que simule um sistema inteligente de cuidado com plantas. O programa deve fornecer um menu para o usuário com as seguintes opções:

a. Adicionar uma nova planta ao sistema  
b. Atualizar as informações da planta  
c. Pesquisar uma planta  
y. Sair  

Observe que o programa completo terá todas essas opções. No entanto, certas notas conterão apenas parte desse menu. O programa deve utilizar loops e declarações condicionais para garantir o fluxo adequado das ações.

**Nota**: Não use funções nesta avaliação, pois elas serão abordadas na **Folha de Avaliação 7**.

---

### **Para alcançar a nota D**

Somente a funcionalidade do menu "a. Adicionar uma nova planta ao sistema" é necessária para atingir a nota D.

**a. Adicionar uma nova planta ao sistema**:
- Solicite ao usuário que insira o nome da planta, espécie, cronograma de rega e requisitos de luz solar.
- Gere um ID exclusivo para a nova planta.
- Armazene os detalhes da planta (ID, nome, espécie, cronograma de rega e requisitos de luz solar) usando variáveis individuais. Por exemplo, você pode definir variáveis como plantID para o ID exclusivo da planta, plantName para o nome da planta, plantSpecies para a espécie da planta, wateringSchedule para o cronograma de rega da planta (por exemplo, diário, semanal) e sunlightRequirements para os requisitos de luz solar da planta (por exemplo, sol pleno, sombra parcial).

Você precisa fornecer capturas de tela do seu código e dos diferentes resultados que ele pode gerar com base nas entradas do usuário.

Seu documento Word deve ter títulos apropriados para garantir que esta tarefa possa ser facilmente identificada ao lado do restante do seu trabalho.

---

### **Para alcançar a nota C**

Complete todas as etapas anteriores e, em seguida, modifique o programa acima para que ele se comporte da seguinte forma:

**b. Atualizar informações da planta**:
- Solicite ao usuário que insira o ID da planta a ser atualizada.
- Verifique se o ID da planta existe.
- Se existir, permita que o usuário atualize o nome da planta, espécie, cronograma de rega ou requisitos de luz solar.
- Se não existir, exiba uma mensagem de erro apropriada.

**c. Pesquisar uma planta**:
- Solicite ao usuário que insira o nome da planta que deseja pesquisar.
- Se a planta for encontrada, exiba seus detalhes.
- Se não for encontrada, exiba uma mensagem indicando que a planta não está no sistema.

---

### **Para alcançar a nota B**

Complete todas as etapas anteriores e, em seguida, modifique o programa para que agora se comporte da seguinte forma:

- Implemente tratamento de erros para entradas inválidas. O programa deve informar ao usuário se ele inseriu uma escolha de menu inválida. Por exemplo, se o usuário inserir 'f', o programa deve dizer "Desculpe, sua entrada é inválida. Por favor, insira a, b ou c."
- Aceite letras maiúsculas e minúsculas para as opções do menu.
- Em todas as instâncias, o programa deve se comportar de maneira amigável ao usuário. Todas as saídas devem ser acompanhadas de texto explicativo e todas as chamadas da função `scanf()` devem ser acompanhadas por uma `printf()` informando o que o usuário deve fazer.
- Atualmente, o programa termina assim que o usuário executa sua ação escolhida. Se ele quisesse selecionar outra ação, teria que executar o programa novamente. Você precisará modificar o programa para que, uma vez que o usuário tenha concluído sua ação, em vez de terminar, o programa exiba o menu novamente, permitindo que o usuário selecione outra opção. Isso exigirá um **loop while**.
- Você também deve adicionar a seguinte opção ao menu: "y – Sair do programa". Se o usuário inserir 'y' (maiúscula ou minúscula), o programa deve parar de repetir e encerrar.
- Como sempre, com caracteres `char`, o programa pode se comportar de forma errática. Isso deve ser corrigido para garantir a validação adequada e tratamento de erros para todas as opções do menu.

---

### **Para alcançar a nota A**

Complete todas as etapas anteriores e:

- Todas as tarefas devem ser acompanhadas de descrições ou anotações escritas. Estas devem demonstrar um entendimento satisfatório do que o código faz.
- Para alcançar notas mais altas, é sempre necessário realizar alguma pesquisa independente. Implemente **ponteiros** no programa e explique sua adequação. Isso deve incluir como os ponteiros melhoram a eficiência e flexibilidade do programa no manuseio de estruturas de dados dinâmicas.

---

### **Diretrizes para a preparação da tarefa**

- Todos os componentes do relatório da tarefa devem ser processados em Word (texto manuscrito ou diagramas desenhados à mão não são aceitáveis), e o tamanho da fonte deve estar entre 11 e 14 pontos, incluindo os títulos, o texto do corpo e qualquer texto dentro dos diagramas.
- Fontes padrão e comumente usadas, como Times New Roman, Arial ou Calibri, devem ser utilizadas.
- Todas as figuras, gráficos e tabelas devem ser numerados e rotulados com explicações curtas.
- Materiais de fontes externas devem ser devidamente reconhecidos e citados no texto, usando o sistema de referência Harvard.
- Todos os componentes da tarefa (texto, diagramas, código etc.) devem ser enviados em um único arquivo Word.
- O relatório deve ser estruturado de forma lógica; o núcleo do relatório pode começar definindo o problema/requisitos, seguido da solução proposta, incluindo discussão detalhada, análise e avaliação, levando à implementação e fase de testes. Finalmente, deve haver uma conclusão e uma reflexão pessoal sobre o aprendizado.
- Capturas de tela sem descrição/discussão não são adequadas, pois não expressam seu entendimento nem apoiam adequadamente o seu trabalho.

---

### **Instruções de envio**

- Esta é uma tarefa de portfólio com um total de oito tarefas. Cada tarefa será concluída e salva no portfólio. Uma vez que o portfólio estiver completo, ele deverá ser submetido via Turnitin. O link de envio no Turnitin pode ser encontrado na aba "Assessment" na seção do módulo no SOL VLE.
- Observe que podem haver limitações de tamanho de arquivo. O seu relatório deve ter menos de 250MB.
- O código-fonte de cada tarefa deve ser compactado e anexado ao relatório Word na submissão como apêndice.

