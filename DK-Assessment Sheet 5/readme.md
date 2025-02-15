# Climate Data Analyzer - Assessment Task

## Overview

This project is a **Climate Data Analyzer** designed to help analyze daily temperature readings for a given period. The system utilizes arrays to store temperature readings and perform various operations such as displaying all readings, calculating statistics, and counting days above or below a specified temperature.

The project consists of four progressively developed versions (D, C, B, A), each offering an increasing level of functionality.

## Features by Grade

### Grade D
This version allows users to input temperature readings and display them along with a generated ID.

**Features**:
- Input temperature readings (up to 30).
- Display all temperature readings with their respective IDs.

**Example interaction**:
```plaintext
Digite o número de leituras de temperatura (até 30): 5
Digite a leitura de temperatura 1: 22
Digite a leitura de temperatura 2: 18
Digite a leitura de temperatura 3: -2
Digite a leitura de temperatura 4: 30
Digite a leitura de temperatura 5: 10

Leituras de Temperatura:
ID: 1, Temperatura: 22°C
ID: 2, Temperatura: 18°C
ID: 3, Temperatura: -2°C
ID: 4, Temperatura: 30°C
ID: 5, Temperatura: 10°C
```

---

### Grade C
This version adds the functionality to calculate and display basic statistics: the average, highest, and lowest temperatures.

**Features**:
- All features from Grade D.
- Calculate and display:
  - Average temperature
  - Highest temperature
  - Lowest temperature

**Example interaction**:
```plaintext
Digite o número de leituras de temperatura (até 30): 5
Digite a leitura de temperatura 1: 22
Digite a leitura de temperatura 2: 18
Digite a leitura de temperatura 3: -2
Digite a leitura de temperatura 4: 30
Digite a leitura de temperatura 5: 10

Menu:
1. Exibir todas as leituras
2. Exibir estatísticas (média, maior e menor)
3. Sair
Escolha uma opção: 2

Média das temperaturas: 15.60°C
Maior temperatura: 30°C
Menor temperatura: -2°C
```

---

### Grade B
This version introduces additional options to count the number of days with temperatures above or below a specified threshold.

**Features**:
- All features from Grade C.
- Count the number of days:
  - Above a specified temperature
  - Below a specified temperature

**Example interaction**:
```plaintext
Digite o número de leituras de temperatura (até 30): 5
Digite a leitura de temperatura 1: 22
Digite a leitura de temperatura 2: 18
Digite a leitura de temperatura 3: -2
Digite a leitura de temperatura 4: 30
Digite a leitura de temperatura 5: 10

Menu:
1. Exibir todas as leituras
2. Exibir estatísticas (média, maior e menor)
3. Contar dias acima de certa temperatura
4. Contar dias abaixo de certa temperatura
5. Sair
Escolha uma opção: 3
Digite o limite de temperatura: 15

Dias acima de 15°C: 3
```

---

### Grade A
This version uses `getchar()` to capture user input for the menu, ensuring that it correctly handles different input methods and cleans up any remaining newline characters from previous inputs. It builds on the functionality of the previous grades.

**Features**:
- All features from Grade B.
- Input is handled using `getchar()` for the menu selection.

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
Digite o número de leituras de temperatura (até 30): 5
Digite a leitura de temperatura 1: 22
Digite a leitura de temperatura 2: 18
Digite a leitura de temperatura 3: -2
Digite a leitura de temperatura 4: 30
Digite a leitura de temperatura 5: 10

Menu:
1. Exibir todas as leituras
2. Exibir estatísticas (média, maior e menor)
3. Contar dias acima de certa temperatura
4. Contar dias abaixo de certa temperatura
5. Sair
Escolha uma opção: 2

Média das temperaturas: 15.60°C
Maior temperatura: 30°C
Menor temperatura: -2°C
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

---

This README file covers all aspects of the project, including instructions for compiling and running the code, as well as detailed explanations for each grade. If you have any further questions or need assistance, feel free to reach out!

