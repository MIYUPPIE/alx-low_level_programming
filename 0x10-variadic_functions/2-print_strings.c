#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...) {
    va_list args;  // Declare a va_list to work with variadic arguments

    va_start(args, n);  // Initialize the va_list

    for (unsigned int i = 0; i < n; i++) {
        char *str = va_arg(args, char *);  // Get the next string argument

        if (str != NULL) {
            printf("%s", str);  // Print the string
        } else {
            printf("(nil)");  // Print "(nil)" for NULL strings
        }

        if (i < n - 1 && separator != NULL) {
            printf("%s", separator);  // Print the separator if it's not the last string
        }
    }

    va_end(args);  // Clean up the va_list

    printf("\n");  // Print a new line at the end
}
