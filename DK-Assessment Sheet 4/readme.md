# Intelligent Plant Care System - Assessment Task

## Overview

This project is a temperature-based **Intelligent Plant Care System** designed for plant management. The system allows users to:
- Add new plants
- Update plant information
- Search for plants
- Exit the program

The project contains four progressively developed versions, each corresponding to different levels of functionality (D, C, B, A). Each version has increasing complexity and feature set.

## Features by Grade

### Grade D
This version only supports the functionality to **add a new plant** to the system. It collects plant data and displays the inputted information.

**Features**:
- Add a new plant by providing:
  - Plant name
  - Plant species
  - Watering schedule
  - Sunlight requirements
- Displays the added plant's details.

Example interaction:
```plaintext
Digite o nome da planta: Margarida
Digite a espécie da planta: Bellis perennis
Digite o cronograma de rega: Semanal
Digite os requisitos de luz solar: Sol pleno

Planta adicionada com sucesso!
ID da Planta: 1
Nome: Margarida
Espécie: Bellis perennis
Cronograma de Rega: Semanal
Requisitos de Luz Solar: Sol pleno
```

---

### Grade C
This version introduces additional functionality to **update plant information** and **search for plants** by name. It also allows multiple operations on a plant's data.

**Features**:
- Add a new plant (same as Grade D).
- Update a plant's:
  - Name
  - Species
  - Watering schedule
  - Sunlight requirements
- Search for plants by name.

Example interaction for updating:
```plaintext
Digite o ID da planta para atualizar: 1
O que deseja atualizar?
a. Nome
b. Espécie
c. Cronograma de Rega
d. Requisitos de Luz Solar
Escolha: b
Digite a nova espécie da planta: Begonia maculata
Planta atualizada com sucesso!
```

Example interaction for searching:
```plaintext
Digite o nome da planta para pesquisar: Begônia

Planta encontrada!
ID da Planta: 1
Nome: Begônia
Espécie: Begonia maculata
Cronograma de Rega: Quinzenal
Requisitos de Luz Solar: Luz indireta
```

---

### Grade B
In this version, the system becomes more interactive and user-friendly with error handling and menu loops that allow users to perform multiple operations without restarting the program. It also accepts both uppercase and lowercase letters for menu selections.

**Features**:
- Add, update, and search for plants (same as Grade C).
- Menu is displayed repeatedly until the user selects the exit option.
- Handles invalid menu inputs and asks the user to enter a valid option.

Example interaction for error handling:
```plaintext
Escolha uma opção: z
Entrada inválida. Por favor, insira a, b, c ou y.
```

---

### Grade A
This version implements **dynamic memory management using pointers** for plant information, enhancing flexibility and efficiency in managing string data. It demonstrates the use of pointers to handle plant data and operates with the same features as Grade B.

**Features**:
- All features from Grade B.
- Utilizes dynamic memory allocation for strings using `malloc` and `free`.

Example interaction:
```plaintext
Digite o nome da planta: Orquídea Branca
Digite a espécie da planta: Phalaenopsis
Digite o cronograma de rega: Semanal
Digite os requisitos de luz solar: Luz indireta
Planta adicionada com sucesso!
```

---

## How to Run the Program

### Prerequisites
- **GCC Compiler**: Ensure that you have GCC or another compatible C compiler installed to compile the source code.
- **Make**: Optionally, you can use `mingw32-make` or `make` to automate the compilation of all files.

### Steps to Compile and Run

1. **Compile the Code**:
   You can compile each file individually or use the provided Makefile to compile all files at once.

   - To compile manually:
     ```bash
     gcc nota_d.c -o nota_d
     gcc nota_c.c -o nota_c
     gcc nota_b.c -o nota_b
     gcc nota_a.c -o nota_a
     ```

   - Or, using the Makefile:
     ```bash
     mingw32-make
     ```

2. **Run the Executable**:
   After compiling, run the corresponding executable for each grade:

   - For **Grade D**:
     ```bash
     ./nota_d
     ```
   - For **Grade C**:
     ```bash
     ./nota_c
     ```
   - For **Grade B**:
     ```bash
     ./nota_b
     ```
   - For **Grade A**:
     ```bash
     ./nota_a
     ```

### Example Interactions

#### Grade B Example:
```plaintext
Escolha uma opção: a
Digite o nome da planta: Lírio
Digite a espécie da planta: Lilium candidum
Digite o cronograma de rega: Semanal
Digite os requisitos de luz solar: Sol pleno
Planta adicionada com sucesso!
```

#### Grade C Example:
```plaintext
Digite o ID da planta para atualizar: 1
O que deseja atualizar?
a. Nome
b. Espécie
Escolha: b
Digite a nova espécie da planta: Begonia maculata
Planta atualizada com sucesso!
```

---

## Makefile

Here is the **Makefile** to automate the compilation process:

```Makefile
# Compilar todos os arquivos
all: nota_d nota_c nota_b nota_a

# Regras para compilar cada arquivo
nota_d: nota_d.c
	gcc nota_d.c -o nota_d

nota_c: nota_c.c
	gcc nota_c.c -o nota_c

nota_b: nota_b.c
	gcc nota_b.c -o nota_b

nota_a: nota_a.c
	gcc nota_a.c -o nota_a

# Limpar os arquivos executáveis
clean:
	rm -f nota_d nota_c nota_b nota_a
```

---

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](http://gnu.org/licenses/gpl.html) file for details.

