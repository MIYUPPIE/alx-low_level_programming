# Variadic Functions Assignment

This repository contains a set of C functions that work with variadic arguments. These functions are part of an assignment and are implemented to solve specific problems.

## Functions

### Function 0: `sum_them_all`

- Prototype: `int sum_them_all(const unsigned int n, ...);`
- Description: Calculates and returns the sum of all its parameters (variadic arguments).
- If `n` is equal to 0, it returns 0.

### Function 1: `print_numbers`

- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- Description: Prints a list of numbers followed by a new line. You can specify a separator between the numbers. If `separator` is NULL, it won't print a separator.

### Function 2: `print_strings`

- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
- Description: Prints a list of strings followed by a new line. You can specify a separator between the strings. If a string is NULL, it prints "(nil)" instead.

### Function 3: `print_all`

- Prototype: `void print_all(const char * const format, ...);`
- Description: Prints a list of values based on the format string provided. The format string specifies the types of arguments that follow it. Supported format specifiers are:
    - `c`: char
    - `i`: integer
    - `f`: float
    - `s`: string (if NULL, it prints "(nil)" instead)
- Any other character in the format string is ignored.

## Example Usage

Here are examples of how to use these functions:

```c
int main(void) {
    int sum;

    sum = sum_them_all(2, 98, 1024); // Returns 1122
    sum = sum_them_all(4, 98, 1024, 402, -1024); // Returns 500

    print_numbers(", ", 4, 0, 98, -1024, 402); // Prints "0, 98, -1024, 402\n"

    print_strings(", ", 2, "Jay", "Django"); // Prints "Jay, Django\n"

    print_all("ceis", 'B', 3, "stSchool"); // Prints "B, 3, stSchool\n"

    return (0);
}
