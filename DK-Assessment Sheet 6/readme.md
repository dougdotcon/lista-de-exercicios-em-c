
# Student Management System

This project is a simple student management system that allows adding, updating, viewing details, and deleting student information. The program is interactive and works in the terminal.

## Features

- **Add a student**: Insert a student's name and age.
- **Update student information**: Modify the name and age of an existing student using their ID.
- **View student details**: Display the details (name and age) of a specific student by ID.
- **Delete a student**: Remove a student from the system by ID.
- **Exit**: Terminate the program.

## Requirements

- C Compiler (e.g., GCC)
- Operating system with UTF-8 support (e.g., Windows with terminal configured for UTF-8)

## Compilation

To compile the program, run the following command in the terminal:

```bash
gcc nota_b.c -o nota_b
```

This will compile the code and generate the executable file `nota_b`.

## Execution

After compilation, run the program with the following command:

```bash
./nota_b   # On Linux/MacOS

# Or on Windows:
nota_b.exe
```

The program will open an interactive menu where you can choose to add, update, view, or delete students, or exit the program.

## Usage Instructions

### Main Menu

When you start the program, you will see the following menu:

```plaintext
Menu:
a. Add a student
b. Update student information
c. View student details
d. Delete student
y. Exit
Choose an option:
```

- **Add a student**: Press `a` and follow the instructions to input the student's name and age.
  
- **Update a student**: Press `b`, enter the ID of the student you want to update, and provide the new name and age.

- **View student details**: Press `c` and enter the ID of the student you want to view.

- **Delete a student**: Press `d` and enter the ID of the student you want to delete.

- **Exit**: Press `y` to exit the program.

### Example Usage

1. **Add a student**:
   ```plaintext
   Choose an option: a
   Enter the student's name: John
   Enter the student's age: 20
   Student added: Name - John, Age - 20
   ```

2. **Update student information**:
   ```plaintext
   Choose an option: b
   Enter the student ID: 0
   Enter the new name: John Smith
   Enter the new age: 21
   Student ID 0 updated: Name - John Smith, Age - 21
   ```

3. **View student details**:
   ```plaintext
   Choose an option: c
   Enter the student ID: 0
   Viewing student details for ID 0: Name - John Smith, Age - 21
   ```

4. **Delete a student**:
   ```plaintext
   Choose an option: d
   Enter the student ID: 0
   Student ID 0 deleted
   ```

5. **Exit the program**:
   ```plaintext
   Choose an option: y
   Exiting...
   ```

## Notes

- The program supports up to 10 students at the same time.
- Student IDs are assigned automatically in the order of insertion.

## Author

This project was developed for learning purposes and demonstrates basic concepts of string manipulation, input/output handling in C.

