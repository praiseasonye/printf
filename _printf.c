#include "main.h"

/**
 * _printf - a function that prints output according to format.
 *
 * @format: the specifier indicating the datatype to be printed.
 *
 * Return: total number of bytes printed out.
 *
 */

int _printf(const char *format, ...)
{
	int i;
	int (*f)(va_list);
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (!format || (format[i] == '%' && !format[i + 1]))
			return (-1);
		if (format[i] ==  '%' && format[i + 1] == ' ' && !format[i + 2])
			return (-1);
		if (format[i] == '%')
		{
			f = call_printfunc(&format[i + 1]);
			if (f == NULL)
			{
				return (-1);
			}
			count += f(args);
			if (count = 0)
				return(-1);
			i = i + 2;
		}
		count += write(1, (format + i), 1);
	}
	va_end(args);

	return (count);

}
