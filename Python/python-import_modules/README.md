# Python - Import & Modules

This project focuses on Python modules and how to effectively import and use functions across different files. You will explore importing modules, handling command-line arguments, and preventing unintended script execution when a file is imported.

## Learning Objectives

By the end of this project, you should be able to:

- Understand the importance of Python modules and how to create and import them
- Import functions from other files and use them in your program
- Utilize the built-in `dir()` function to inspect objects and modules
- Prevent code execution when a script is imported
- Manage and use command-line arguments in your Python programs

## Requirements

- **Editor:** vi, vim, emacs
- **Environment:** Files will be interpreted/compiled on Ubuntu 22.04 LTS using Python 3.10.*
- **Code Style:** All files must comply with the [pycodestyle](https://pypi.org/project/pycodestyle/) (version 2.7.*) style guide
- **Executable:** All files must be executable
- **Script Header:** The first line of all files should be exactly `#!/usr/bin/python3`
- **Line Endings:** All files should end with a new line
- **README:** A `README.md` file at the root of the project is mandatory
- **File Length:** File length will be tested using the `wc` command

## Tasks

### 0. Import a simple function from a file
Write a program that imports the function `add(a, b)` from the file `add_0.py` and prints the result of the addition:
- Usage: `1 + 2 = 3`
- Use `print` with string formatting
- Ensure the program does not execute code when imported

### 1. My first toolbox!
Write a program that imports functions from `calculator_1.py` and performs mathematical operations (addition, subtraction, multiplication, division):
- Use variables `a = 10` and `b = 5`
- Call each of the imported functions
- Ensure no code is executed when imported

### 2. How to make a script dynamic!
Create a script that prints the number of arguments passed to it, followed by the list of arguments:
- Output format: `1: Hello` or `0 arguments.`
- If no arguments are passed, print `0 arguments.`
- Ensure the program does not execute code when imported

### 3. Infinite addition
Write a program that prints the sum of all command-line arguments:
- You can cast arguments to integers using `int()`
- Handle large numbers
- Ensure the program does not execute code when imported

### 4. Who are you?
Write a program that prints all the names defined by the compiled module `hidden_4.pyc`:
- Print one name per line in alphabetical order
- Only print names that do not start with `__`
- Ensure the program does not execute code when imported

### 5. Everything can be imported
Write a program that imports the variable `a` from `variable_load_5.py` and prints its value:
- Ensure no wildcard imports (`*`) or `__import__` are used
- Ensure the program does not execute code when imported

## Resources

- [Modules](https://docs.python.org/3/tutorial/modules.html)
- [Command Line Arguments](https://docs.python.org/3/library/argparse.html)
- [Pycodestyle – Style Guide for Python Code](https://pypi.org/project/pycodestyle/)
- **Man Pages:** `python3`
