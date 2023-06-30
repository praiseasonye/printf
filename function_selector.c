#include "main.h"

/**
 * call_printfunc - a function that returns a pointer to the appropriate
 *                  function if the character passed to it as argument
 *                  matches thespecifier includes in the _printf
 *                  variadic arguments
 *
 * @s: this is the specifier that would determine the function to be returned
 *
 * Return: a function pointer.
 */

int (*call_printfunc(const char s))(va_list)
{
	ff_t format_func[] = {
		{'c', char_printer},
		{'s', string_printer},
		{'%', percent_printer},
		{'d', decimal_printer},
		{'i', decimal_printer},
		{'b', binary_printer},
		{'\0', NULL}
	};
	int i = 0;

	for (i = 0; format_func[i].specifier != '\0'; i++)
		if (format_func[i].specifier == s)
			return (format_func[i].func);
	return (NULL);
}
