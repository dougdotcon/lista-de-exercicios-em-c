### **Tarefa 2: Calculadora de preços de serviço de entrega de refeições**

Nesta tarefa, você criará um programa para um serviço de entrega de refeições que calcula o custo total do pedido de refeição de um usuário com base no plano de refeição selecionado e em quaisquer itens adicionais que ele escolha. O programa focará em variáveis, operadores aritméticos, operadores lógicos e declarações condicionais.

#### **Para alcançar uma nota D (cálculo básico do custo do plano de refeição)**

- Crie quatro variáveis para armazenar: o plano de refeição selecionado pelo usuário (`selectedPlan`), itens adicionais (`additionalItems`), se o pedido é para retirada (`isTakeaway`) e o custo total do pedido (`totalCost`).
- Atribua um valor padrão para `selectedPlan` representando o plano de refeição escolhido pelo usuário, conforme abaixo:
  - 'S' para Standard
  - 'V' para Vegetariano
  - 'F' para Familiar
- Atribua um valor padrão para `additionalItems` representando o número de itens adicionais que o usuário seleciona.
- Defina o valor de `isTakeaway` como 'y' se o cliente estiver pedindo para retirada, ou 'n' se não estiver.
- Calcule o custo total do pedido com base nas seguintes regras:
  - plano standard: £7.99 por refeição
  - plano vegetariano: £6.99 por refeição
  - plano familiar: £29.99 por refeição tamanho família
  - itens adicionais: £1.99 cada por refeição
  - Se o pedido for para retirada (`isTakeaway` for 'y'), aplique um desconto de 5% no custo total.
- Exiba o plano de refeição selecionado, o número de itens adicionais, se o pedido é para retirada e o custo total do pedido para o usuário.
- Você precisa fornecer capturas de tela do seu código e dos diferentes resultados que ele pode gerar.

---

#### **Para alcançar uma nota C (entrada do usuário para o pedido de refeição)**

Conclua todos os passos anteriores e aplique as seguintes mudanças:

- Modifique o programa para permitir que o usuário insira seu plano de refeição selecionado e o número de itens adicionais.
- Solicite ao usuário que selecione um plano de refeição entre as opções disponíveis ('S' para Standard, 'V' para Vegetariano, ou 'F' para Familiar).
- Solicite ao usuário que selecione o número de itens adicionais que deseja adicionar ao pedido de refeição.
- Solicite ao usuário que especifique se o pedido é para retirada ('y' ou 'n').
- Calcule o custo total do pedido com base nas seleções do usuário.
- Exiba o plano de refeição selecionado, o número de itens adicionais, se o pedido é para retirada e o custo total do pedido após possíveis descontos.

---

#### **Para alcançar uma nota B (desconto no plano familiar e itens personalizados)**

Conclua todos os passos anteriores, depois:

- Aprimore o código para oferecer um desconto aos usuários que selecionarem o Plano Familiar.
- Se o usuário selecionar o Plano Familiar, aplique um desconto de 10% no custo total do pedido.
- Permita que os usuários insiram itens personalizados que desejam adicionar ao pedido de refeição.
- Solicite ao usuário que insira o nome e o custo de cada item personalizado (ex., até 2 itens personalizados).
- Calcule o custo total do pedido, incluindo o desconto do plano familiar, itens personalizados e o desconto para retirada.
- Exiba o plano de refeição selecionado, o número de itens adicionais (incluindo itens personalizados), se o pedido é para retirada, quaisquer descontos aplicados e o custo total do pedido para o usuário.

---

#### **Para alcançar uma nota A (switch statements e recursos avançados)**

Conclua todos os passos anteriores, depois:

- Para atingir uma nota mais alta, é necessário realizar uma pesquisa independente. Por exemplo, investigue o uso de declarações `switch` e crie um programa que demonstre como elas podem ser usadas no lugar de `if-else`. Você poderia, por exemplo, implementar `switch statements` para lidar com a entrada do usuário para os planos de refeição e itens adicionais.
- Documente isso no seu portfólio e forneça uma explicação detalhada sobre `switch statements`.

---

### **Diretrizes para a preparação da tarefa**

- Todos os componentes do relatório da tarefa devem ser digitados (textos manuscritos ou diagramas desenhados à mão não são aceitáveis). O tamanho da fonte deve estar entre 11 e 14 pontos, incluindo os títulos, corpo do texto e qualquer texto dentro de diagramas.
- Fontes padrão e comumente usadas, como Times New Roman, Arial ou Calibri, devem ser utilizadas.
- Todas as figuras, gráficos e tabelas devem ser numeradas e rotuladas com explicações curtas.
- Materiais de fontes externas devem ser devidamente reconhecidos e citados dentro do texto, usando o sistema de referência Harvard.
- Todos os componentes da tarefa (texto, diagramas, código etc.) devem ser enviados em um único arquivo Word.
- O relatório deve ser logicamente estruturado, começando pela definição do problema/requisitos, seguido pela solução proposta, incluindo discussão, análise e avaliação detalhadas, levando à implementação e fase de testes, e, finalmente, uma conclusão e uma reflexão pessoal sobre o aprendizado.

---

**Instruções de envio:**

- Esta é uma tarefa de portfólio com oito tarefas no total. Cada tarefa será concluída e salva no portfólio. Uma vez que o portfólio estiver completo, ele deve ser enviado via Turnitin.
- O link para envio no Turnitin pode ser encontrado na aba "Assessment" na seção do módulo no SOL VLE.
- O código-fonte de cada tarefa deve ser compactado e anexado ao seu relatório Word como apêndice.
