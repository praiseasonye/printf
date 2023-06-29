#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <errno.h>

/**
 * struct format_function - a structure that holds the specifier and
 *                          the function to print different data types
 *
 * @format: the sting containing different datatypes to be printed
 *
 * @print_arg: a pointer to a function that prints the variadic argument
 *             according the the specified format.
 *
 */

typedef struct format_function
{
	const char specifier;
	int (*func)(va_list);
} ff_t;

int (*call_printfunc(const char s))(va_list);
int char_printer(va_list args);
int string_printer(va_list args);
int percent_printer(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int decimal_printer(va_list args);
int decimal_binary(va_list args);

#endif
