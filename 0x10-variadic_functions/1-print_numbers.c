#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...) {
    va_list args;  // Declare a va_list to work with variadic arguments

    va_start(args, n);  // Initialize the va_list

    for (unsigned int i = 0; i < n; i++) {
        int num = va_arg(args, int);  // Get the next integer argument

        printf("%d", num);  // Print the number

        if (i < n - 1 && separator != NULL) {
            printf("%s", separator);  // Print the separator if it's not the last number
        }
    }

    va_end(args);  // Clean up the va_list

    printf("\n");  // Print a new line at the end
}
