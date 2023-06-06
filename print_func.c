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

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	if (c == NULL || c == '\0')
		return (-1);
	return (-1);
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
		s = "(null)";
		return (-1);
	while (s[i] != '\0')
	{
		count += write(1, (s + i), 1);
		i++;
	}
	return (count);
}

/**
 * percent_printer - a function that prints a percentage (%) sign from %%
 *                   input.
 * @args: it would be turned to a void parameter in the code.
 *
 * Return: the number of things printed.
 */

int percent_printer(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
