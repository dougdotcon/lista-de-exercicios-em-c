# Temperature Conversion Utility - Assessment Task

## Overview

This project is a temperature conversion utility developed as part of an assessment task. The program converts temperatures between Celsius and Fahrenheit, using different levels of complexity across four grades (D, C, B, A). The program allows single or multiple conversions and provides feedback based on the direction of conversion. 

## Features by Grade

### Grade D
- Converts a single temperature from **Celsius to Fahrenheit**.
- The user inputs a temperature in Celsius, and the program outputs the equivalent Fahrenheit value.

Example interaction:
```plaintext
Digite a temperatura em Celsius: 20
20.00 Celsius é igual a 68.00 Fahrenheit
```

### Grade C
- Converts multiple temperatures from **Celsius to Fahrenheit** using a loop.
- The user can perform multiple conversions until they choose to exit.
- The program keeps track of the number of conversions performed.

Example interaction:
```plaintext
Digite a temperatura em Celsius: 25
25.00 Celsius é igual a 77.00 Fahrenheit
Deseja converter outra temperatura? (y/n): y

Digite a temperatura em Celsius: -5
-5.00 Celsius é igual a 23.00 Fahrenheit
Deseja converter outra temperatura? (y/n): y

Digite a temperatura em Celsius: 100
100.00 Celsius é igual a 212.00 Fahrenheit
Deseja converter outra temperatura? (y/n): n
Você converteu 3 temperaturas.
```

### Grade B
- Adds the ability to convert in **both directions**: Celsius to Fahrenheit and Fahrenheit to Celsius.
- The user selects the direction of conversion before entering the temperature.
- The program provides feedback about whether the converted temperature is above or below the freezing point.

Example interaction:
```plaintext
Escolha a conversão:
'C' para converter Celsius para Fahrenheit
'F' para converter Fahrenheit para Celsius
C
Digite a temperatura em Celsius: 30
30.00 Celsius é igual a 86.00 Fahrenheit
Está acima do ponto de congelamento de 32°F.
Deseja converter outra temperatura? (y/n): y

Escolha a conversão:
'C' para converter Celsius para Fahrenheit
'F' para converter Fahrenheit para Celsius
F
Digite a temperatura em Fahrenheit: 20
20.00 Fahrenheit é igual a -6.67 Celsius
Está abaixo do ponto de congelamento de 0°C.
Deseja converter outra temperatura? (y/n): n
Você converteu 2 temperaturas.
```

### Grade A
- Uses a **different loop structure** (`do-while`) for the same functionality as Grade B.
- The program continuously asks for user input and processes temperature conversions until the user chooses to exit.

Example interaction:
```plaintext
Escolha a conversão:
'C' para converter Celsius para Fahrenheit
'F' para converter Fahrenheit para Celsius
C
Digite a temperatura em Celsius: 25
25.00 Celsius é igual a 77.00 Fahrenheit
Está acima do ponto de congelamento de 32°F.
Deseja converter outra temperatura? (y/n): y

Escolha a conversão:
'C' para converter Celsius para Fahrenheit
'F' para converter Fahrenheit para Celsius
F
Digite a temperatura em Fahrenheit: -10
-10.00 Fahrenheit é igual a -23.33 Celsius
Está abaixo do ponto de congelamento de 0°C.
Deseja converter outra temperatura? (y/n): n
Você converteu 2 temperaturas.
```

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
Escolha a conversão:
'C' para converter Celsius para Fahrenheit
'F' para converter Fahrenheit para Celsius
C
Digite a temperatura em Celsius: 30
30.00 Celsius é igual a 86.00 Fahrenheit
Está acima do ponto de congelamento de 32°F.
```

#### Grade C Example:
```plaintext
Digite a temperatura em Celsius: 20
20.00 Celsius é igual a 68.00 Fahrenheit
Deseja converter outra temperatura? (y/n): n
Você converteu 1 temperatura.
```

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

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](http://gnu.org/licenses/gpl.html) file for details.

---
