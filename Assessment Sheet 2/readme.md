# Meal Delivery Service Calculator - Assessment Task

## Overview

This project is a meal delivery service price calculator, developed as part of an assessment task. The program calculates the total cost of a meal order based on the selected meal plan, additional items, and optional personalized items. It also applies discounts for takeaways and family meal plans where applicable.

The project was divided into four levels of complexity (Grades D, C, B, and A), with each level adding more features and functionality.

## Features by Grade

### Grade D
- Calculates the total order cost based on a **predefined meal plan** and a fixed number of additional items.
- Applies a **5% discount** if the order is marked as takeaway.
- Outputs the total cost to the user, but there are **no user inputs**.
  
Example output:
```plaintext
Meal Plan: S
Additional Items: 2
Takeaway: Yes
Total Order Cost: £11.38
```

### Grade C
- Allows the **user to select a meal plan**, specify the number of additional items, and indicate if the order is for takeaway.
- Applies a **5% discount** for takeaway orders.
- Calculates the total cost based on user inputs.

Example interaction:
```plaintext
Select a meal plan ('S' for Standard, 'V' for Vegetarian, 'F' for Family): V
Enter the number of additional items: 1
Is the order for takeaway? (y/n): y
```
Expected output:
```plaintext
Meal Plan: V
Additional Items: 1
Takeaway: Yes
Total Order Cost: £8.45
```

### Grade B
- Builds upon the Grade C functionality by adding a **10% discount** for the Family meal plan.
- Allows the user to **add up to 2 personalized items**, each with a custom cost.
- Applies both discounts where applicable (Family plan and takeaway).

Example interaction:
```plaintext
Select a meal plan ('S' for Standard, 'V' for Vegetarian, 'F' for Family): F
Enter the number of additional items: 3
Is the order for takeaway? (y/n): y
How many personalized items (maximum 2)? 2
Enter the name of personalized item 1: Dessert
Enter the cost of Dessert: £3.50
Enter the name of personalized item 2: Drink
Enter the cost of Drink: £1.99
```
Expected output:
```plaintext
Meal Plan: F
Additional Items: 3
Takeaway: Yes
Total Cost of Personalized Items: £5.49
Total Order Cost: £40.82
```

### Grade A
- Implements **`switch statements`** to handle meal plan selection and personalize the item additions instead of traditional `if-else` conditions.
- Provides a more structured way to handle user input, particularly with the different meal plan types.

Example interaction:
```plaintext
Select a meal plan ('S' for Standard, 'V' for Vegetarian, 'F' for Family): S
Enter the number of additional items: 2
Is the order for takeaway? (y/n): n
```
Expected output:
```plaintext
Meal Plan: S
Additional Items: 2
Takeaway: No
Total Order Cost: £11.97
```

## How to Run the Program

### Prerequisites
- **GCC Compiler**: Ensure that you have GCC or another compatible C compiler installed to compile the source code.
- **Make**: Optionally, you can use `mingw32-make` or `make` to automate the compilation of all files.

### Steps to Compile and Run

1. **Compile the Code**:
   You can compile each file individually or use the provided `Makefile` to compile all files at once.

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

#### Grade C Example:
```plaintext
Select a meal plan ('S' for Standard, 'V' for Vegetarian, 'F' for Family): S
Enter the number of additional items: 2
Is the order for takeaway? (y/n): n
```
Expected output:
```plaintext
Meal Plan: S
Additional Items: 2
Takeaway: No
Total Order Cost: £11.97
```

#### Grade B Example:
```plaintext
Select a meal plan ('S' for Standard, 'V' for Vegetarian, 'F' for Family): F
Enter the number of additional items: 3
Is the order for takeaway? (y/n): y
How many personalized items (maximum 2)? 2
Enter the name of personalized item 1: Drink
Enter the cost of Drink: £1.99
Enter the name of personalized item 2: Dessert
Enter the cost of Dessert: £3.50
```
Expected output:
```plaintext
Meal Plan: F
Additional Items: 3
Takeaway: Yes
Total Cost of Personalized Items: £5.49
Total Order Cost: £40.82
```

## Makefile

You can use the following Makefile to automate the compilation process:

```Makefile
# Compilar todos os arquivos
all: nota_d nota_c nota_b nota_a

# Regra para compilar cada arquivo
nota_d: nota_d.c
	gcc nota_d.c -o nota_d

nota_c: nota_c.c
	gcc nota_c.c -o nota_c

nota_b: nota_b.c
	gcc nota_b.c -o nota_b

nota_a: nota_a.c
	gcc nota_a.c -o nota_a

# Limpeza dos arquivos executáveis
clean:
	rm -f nota_d nota_c nota_b nota_a
```

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](http://gnu.org/licenses/gpl.html) file for details.

---