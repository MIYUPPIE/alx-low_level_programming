#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* Prototype for the sum_them_all function */
int sum_them_all(const unsigned int n, ...);

/* Prototype for the print_numbers function */
void print_numbers(const char *separator, const unsigned int n, ...);

/* Prototype for the print_strings function */
void print_strings(const char *separator, const unsigned int n, ...);

/* Prototype for the print_all function */
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
