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

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(args, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			count += write(1, &format[i], 1);

		else if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				count += write(1, &format[i], 1);
				i++;
				continue;
			}
			f = call_printfunc(format[i + 1]);
			if (!f)
			{
				count += write(1, &format[i], 1);
				continue;
			}
			count += f(args);
			i++;
		}
	}
	va_end(args);

	return (count);

}
