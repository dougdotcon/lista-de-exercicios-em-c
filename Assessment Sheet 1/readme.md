# Fitness Tracker Program - Task 1

## Overview

This project is a fitness tracker program developed to monitor personal fitness activities and facilitate weekly goal management. The program calculates the total activity time for different exercise categories (e.g., running, cycling, swimming, weightlifting, yoga), compares activity durations between two weeks, and checks if weekly goals are met. 

The project was divided into four levels of complexity (Grades D, C, B, and A), with each level adding more features and functionality.

## Features

### Grade D
- Stores predefined activity durations for five fitness categories: running, cycling, swimming, weightlifting, and yoga.
- Calculates the total weekly activity time based on these values.
- Outputs the total activity time in minutes.

### Grade C
- Allows user input for each fitness activity duration.
- Implements error handling to ensure only positive numbers are accepted.
- Calculates the total weekly activity duration from user inputs.
- Adds functionality for setting a weekly activity goal and checks if the goal is met.

### Grade B
- Tracks activities for two consecutive weeks.
- Allows user input for different activity durations for each week.
- Compares the total weekly activity durations for each week and checks if the weekly goals were met.
- Calculates and outputs the percentage increase or decrease in activity between the two weeks.

### Grade A
- Allows dynamic input of any number of fitness activities (from 1 to 5) for each week.
- The user can select how many and which activities to track for each week.
- Provides detailed weekly activity reports, including a comparison of total activity duration for each week against the weekly goal, with percentage change calculations.

## How to Run the Program

### Prerequisites
- **GCC Compiler**: You need to have GCC (or another compatible C compiler) installed to compile the code.
- **Make**: (Optional) If you want to compile all files at once, make sure `mingw32-make` or `make` is installed.

### Steps to Compile and Run

1. **Compile the Code:**
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

2. **Run the Executables:**
   After compiling, run the corresponding executable file to test each grade:
   
   - For Grade D:
     ```bash
     ./nota_d
     ```
   - For Grade C:
     ```bash
     ./nota_c
     ```
   - For Grade B:
     ```bash
     ./nota_b
     ```
   - For Grade A:
     ```bash
     ./nota_a
     ```

### Example Usage
Here’s an example of input and output for **Grade B**:

```
Week 1:
Enter the time spent on running (minutes): 30
Enter the time spent on cycling (minutes): 20
Enter the time spent on swimming (minutes): 15
Enter the time spent on weightlifting (minutes): 25
Enter the time spent on yoga (minutes): 10
Total time for week 1: 100 minutes

Week 2:
Enter the time spent on running (minutes): 35
Enter the time spent on cycling (minutes): 25
Enter the time spent on swimming (minutes): 20
Enter the time spent on weightlifting (minutes): 30
Enter the time spent on yoga (minutes): 15
Total time for week 2: 125 minutes

Enter your weekly activity goal (minutes): 125

Week 1: Goal not achieved. 25 minutes short.
Week 2: Goal achieved!
Activity increased by 25.00% in the second week.
```

### Code Structure
- `nota_d.c`: Basic version for Grade D.
- `nota_c.c`: Version with user input and goal checking for Grade C.
- `nota_b.c`: Version with two-week tracking and comparison for Grade B.
- `nota_a.c`: Dynamic version with customizable activity selection for Grade A.

## License
This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](http://gnu.org/licenses/gpl.html) file for details.

---
