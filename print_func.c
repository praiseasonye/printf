#include "main.h"

/**
 * char_printer - this is a function that prints
 *                a character to the standard output.
 * @args: this is the variadic character argument to be printed
 *
 * Return: the number of bytes printed.
 */

int char_printer(va_list args)
{
	char c;
	int count = 0;

	 c = (char)va_arg(args, int);
	 count = write(1, &c, 1);
	 return (count);
}

/**
 * string_printer - this is a function that prints
 *                  a character to the standard output.
 * @args: this is the variadic string argument to be printed
 *
 * Return: the number of bytes printed
 */

int string_printer(va_list args)
{
	char *s;
	int count = 0;
	int i = 0;

	s = va_arg(args, char *);
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		count += write(1, (s + i), 1);
		i++;
	}
	return (count);
}


