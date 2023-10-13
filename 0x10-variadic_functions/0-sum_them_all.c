#include <stdarg.h>

int sum_them_all(const unsigned int n, ...) {
    va_list args;  // Declare a va_list to work with variadic arguments
    int sum = 0;  // Initialize the sum to 0

    if (n == 0) {
        return 0;  // If n is 0, return 0
    }

    va_start(args, n);  // Initialize the va_list

    for (unsigned int i = 0; i < n; i++) {
        sum += va_arg(args, int);  // Add each argument to the sum
    }

    va_end(args);  // Clean up the va_list

    return sum;
}
