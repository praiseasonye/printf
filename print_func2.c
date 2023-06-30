#include "main.h"

/**
 * binary_printer: a custom format specifier that converts
 *                 decimal to binary.
 * @args: the variadic argument (decimal)
 *        to be converted to binary.
 *
 * Return: the number of bytes printed to output.
 *
 */

int binary_printer(va_list args)
{
	unsigned int decimal;
	unsigned int count = 0, temp, *bin_holder;
	int bin_count = 0, i;

	decimal = va_arg(args, int);
	if (decimal == 0)
	{
		count = _putchar('0');
		return (count);
	}
	bin_count = bin_counter(decimal) * 2;
	bin_holder = malloc(bin_count * sizeof (*bin_holder));
	temp = decimal;
	for (i = 0; i < bin_count - 1; i++)
	{
		temp = decimal % 2;
		bin_holder[i] = temp;
		decimal /= 2;
	}
	bin_holder[i] = 1;
	for (; i >= 0; i--)
		count += _putchar(bin_holder[i] + '0');

	free(bin_holder);
	return (count);

}

/**
 * bin_counter: a recursive function that counts the number
 *              divisions needed to change a number from
 *              decimal to binary.
 *
 * @args: the number to transformed.
 *
 * Return: the division count needed to change a number from
 * decimal to binary.
 *
 */

int bin_counter(int num)
{
	int bin_count;

	if (num == 1)
		return (1);
	bin_count = (1 + bin_counter(num / 2));
	return (bin_count);

}
